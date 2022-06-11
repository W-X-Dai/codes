//https://uoj.ac/problem/127
//90%
#include<bits/stdc++.h>
#define eb emplace_back
#define m_p make_pair
#define pii pair<int,int>
#define ff first
#define ss second


using namespace std;

int a,b,c,fa[1000005];
vector<pii> v0,v1;

inline void init(){
    for(int i=0;i<1000001;++i)fa[i]=i;
    v0.clear(),v1.clear();
}

inline int find(int x){
    if(fa[x]==x)return x;
    else {
        fa[x]=find(fa[x]);
        return find(fa[x]);
    }
}

inline void _union(int a,int b){
    a=find(a),b=find(b);
    fa[a]=b;
}

inline void sol(){
    init();
    int n;

    cin >>n;
    for(int i=0;i<n;++i){
        cin >>a>>b>>c;
        if(c)v1.eb(m_p(a,b));
        else v0.eb(m_p(a,b));
    }

    for(auto i:v1){
        _union(i.ff,i.ss);
    }
    for(auto i:v0){
        if(find(i.ff)==find(i.ss)){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}