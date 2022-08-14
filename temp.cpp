#include<iostream>
#include<vector>
#define eb emplace_back
using namespace std;


struct heap{
    int arr[200005],pt;
    void insert(int x){
        arr[pt]=x;
        int id=pt;
        while(id>>1){
        //    cout<<(id>>1)<<'\n';
            if(arr[id]<arr[id>>1])swap(arr[id],arr[id>>1]);
            //else return;
            id>>=1;
        }
        ++pt;arr[pt]=0x3f3f3f3f;
    //    show();
    }
    
    void show(){
        for(int i=1;i<=pt;++i)cout<<arr[i]<<" \n"[i==pt];
        return;
    }
    void pop(){
        swap(arr[pt],arr[1]);
        arr[pt]=0x3f3f3f3f;--pt;

        int id=1;
        while((id<<1)<=pt){
            int ch=(id<<1)+(arr[id<<1]>arr[id<<1|1]);
            if(arr[ch]<arr[id])swap(arr[ch],arr[id]);
            else return;
            id=ch;
        }
        return;
    }
    int top(){
        return arr[1];
    }
    
    
} pq;

int n,x;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    freopen("input","r",stdin);

    cin >>n;pq.pt=1;
    for(int i=0;i<n;++i){
        cin >>x;pq.insert(x);
    }
    
    
    for(int i=0;i<n;++i){
    //    pq.show();
        cout<<pq.top()<<" \n"[i==n-1];
        pq.pop();
    }
    return 0;
}