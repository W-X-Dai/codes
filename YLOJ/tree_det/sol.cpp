#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int n,m;

inline void init(){
    freopen("t1.in","r",stdin);
    freopen("t1.out","w",stdout);
}

inline bool det(){
    int arr[100]={0},a,b;
    if(n!=m+1)return 0;
    
    for(int i=0;i<m;++i){
        cin >>a>>b;
        arr[a]=1;arr[b]=1;
    }
    for(int i=1;i<=n;++i){
        if(arr[i]==0)return 0;
    }
    return 1;
}

inline void sol(){
    cin >>n>>m;
    cout<<(det()?"YES":"NO")<<'\n';
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    init();
    cin >>n;
    for(int i=0;i<10;++i)sol();
}