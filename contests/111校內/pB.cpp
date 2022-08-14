#include<bits/stdc++.h>
#define eb emplace_back
#define pii pair<int,int>
#define m_p make_pair
#define a first
#define b second
using namespace std;

int n,m,pre[11],arr[10],cnt;
vector<pii>rul1,rul2,rul3;


inline void init(){
    pre[1]=1;
    for(int i=2;i<=10;++i){
        pre[i]=i*pre[i-1];
    }
    for(int i=1;i<=n;++i)arr[i]=i;
}

inline bool check(){
    int mp[11];
    for(int i=1;i<=n;++i){
        mp[arr[i]]=i;
    }
    for(auto i:rul1){
        if(abs(mp[i.a]-mp[i.b])!=1)return 0;
    }
    for(auto i:rul2){
        if(abs(mp[i.a]-mp[i.b])==1)return 0;
    }
    for(auto i:rul3){
        if(mp[i.a]>mp[i.b])return 0;
    }
    return 1;
}

inline void output(){
    for(int i=1;i<=n;++i)cout<<arr[i]<<" \n"[i==n];
    return;    
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>m;
    for(int i=0;i<m;++i){
        int x,aa,bb;
        cin >>x>>aa>>bb;
        if(x==1)rul1.eb(m_p(aa,bb));
        if(x==2)rul2.eb(m_p(aa,bb));
        if(x==3)rul3.eb(m_p(aa,bb));
    }
    
    init();
    for(int i=0;i<pre[n];++i){
        next_permutation(arr+1,arr+1+n);
        cnt+=check();
    }
    cout<<cnt<<'\n';
    return 0;
}