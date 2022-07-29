#include<bits/stdc++.h>
using namespace std;

int door[4],n;

inline void open(int x){
    int tmp=door[x];
    door[x]=-1;
    
    if(!tmp)return;
    
    open(tmp);
}

inline void sol(){
    cin >>n;
    for(int i=1;i<=3;++i)cin >>door[i];
    open(n);

    for(int i=1;i<=3;++i){
        if(door[i]!=-1){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}