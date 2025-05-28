#include<bits/stdc++.h>
using namespace std;

struct patient{
    int id, time, pri;
}arr[31];


inline void read_data(){
    ifstream fin("data");
    for(int i=1;i<=30;++i)
        fin >> arr[i].id >> arr[i].time >> arr[i].pri;
    fin.close();
    return;
}

class heap{
private:
    patient heap_arr[31];
    int size, id=1, time=0;
    queue<patient> waiting;
public:
    void insert(patient x){
        heap_arr[++size] = x;
        int i = size;
        while(i and heap_arr[i].pri<heap_arr[i>>1].pri){
            swap(heap_arr[i], heap_arr[i>>1]);
            i>>=1;     
        }
    }
    
    patient top(){
        return heap_arr[1];
    }
    
    void pop(){
        swap(heap_arr[1], heap_arr[size--]);
        int id=1;
        while((id<<1)<=size){
            int ch=(id<<1)+(heap_arr[id<<1].pri<heap_arr[id<<1|1].pri);
            if(heap_arr[ch].pri<heap_arr[id].pri)swap(heap_arr[ch],heap_arr[id]);
            else return;
            id=ch;
        }
        return;
    }

    void record(){
        ofstream fout("output", ios::app);
        while(size){
            fout<<top().id<<" "<<top().time<<'\n';
            pop();
        }
        fout.close();
    }

    void wait(){
        while(arr[id].time<=time){
            waiting.push(arr[id]);
            id++;
        }
    }
    
    void push_to_heap(){
        while(!waiting.empty()){
            insert(waiting.front());
            waiting.pop();
        }
    }

    void simulate(){
        time+=arr[id].time;
        wait();
        push_to_heap();
        record();
        if(id<=30) simulate();
    }
};

int main(){
    read_data();
    heap pq;
    pq.simulate();
    return 0;
}