#include<bits/stdc++.h>
using namespace std;

struct patient{
    int id,time,pri;
}arr[31];

int current_time=0, t[4]={0, 7, 5, 3};

struct heap{
    int pt=0;
    patient hp[20000];

    void insert(patient x){
        hp[++pt]=x;
        int id=pt;
        while(id>1){
            if(hp[id].pri<hp[id>>1].pri){
                swap(hp[id], hp[id>>1]);
            }
            if(hp[id].pri==hp[id>>1].pri and hp[id].time<hp[id>>1].time){
                swap(hp[id], hp[id>>1]);
            }
            id>>=1;
        }
    }

    void pop() {
        swap(hp[pt], hp[1]);
        --pt;
        int id=1;
        while((id<<1)<=pt) {
            int smallest=id;
            int left=id<<1;
            int right=(id<<1|1);
            
            if(left<=pt){
                if (hp[left].pri<hp[smallest].pri ||
                    (hp[left].pri==hp[smallest].pri && hp[left].time<hp[smallest].time)){
                    smallest=left;
                }
            }

            if(right<=pt){
                if (hp[right].pri<hp[smallest].pri ||
                    (hp[right].pri==hp[smallest].pri && hp[right].time<hp[smallest].time)){ 
                    smallest=right;
                }
            }
            
            if(smallest==id)break;
            swap(hp[id], hp[smallest]);
            id=smallest;
        }
    }

    patient top(){
        return hp[1];
    }

    void show(){
        for(int i=1;i<=pt;++i)
            cout<<hp[i].id<<" "<<hp[i].time<<" "<<hp[i].pri<<'\n';
    }

    bool empty(){
        return pt==0;
    }

} pq;

inline void init(){
    ofstream fout("output");
}

inline void read_data(){
    ifstream fin("data");
    for(int i=1;i<=30;++i)
        fin>>arr[i].id>>arr[i].time>>arr[i].pri;
    fin.close();
    return;
}    

inline void check(){
    for(int i=1;i<=30;++i){
        cout<<arr[i].id<<" "<<arr[i].time<<" "<<arr[i].pri<<" "<<t[arr[i].pri]<<'\n';
    }
}

int main(){
    init();
    ofstream fout("output", ios::app);

    read_data();
    check();
    current_time=0;
    for(int i=1;i<=30 || !pq.empty();){
    //    cout<<i<<'\n';
        while(current_time>=arr[i].time){
            if(i>30) break;
            cout<<i<<" "<<current_time<<" "<<arr[i].time<<'\n';
            pq.insert(arr[i]);
            ++i;
            
        }

        if(pq.empty()) {
            current_time=arr[i].time;
            continue;
        }
        if(!pq.empty()){
            patient p=pq.top();
            pq.pop();
            fout<<"Patient ID: "<<p.id<<", Time: "<<current_time<<"~"<<current_time+t[p.pri]<<", Priority: "<<p.pri<<'\n';
            current_time+=t[p.pri];
            //pq.show();
        }        
    //    cout<<i<<" done\n";
        cout<<'\n';
    }


    return 0;
}