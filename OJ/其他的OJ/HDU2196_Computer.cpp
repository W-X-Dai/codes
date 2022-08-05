#include<bits/stdc++.h>
#define eb emplace_back
#define pii pair<int,int>
#define m_p make_pair
#define ff first
#define ss second

using namespace std;

vector<pii> v[1005];
int n,s1,s2,fa_s1,fa_s2,dp[1005];

inline void dfs(int root,int fa,int len){

    if(len>fa_s1)fa_s1=len,s1=root;
    for(auto i:v[root]){
        if(i.ff==fa)continue;
        dfs(i.ff,root,len+i.ss);
    }
}

inline void dfs2(int root,int fa,int len){
    if(len>dp[root])dp[root]=len;
    if(len>fa_s1)fa_s2=len,s2=root;
    for(auto i:v[root]){
        if(i.ff==fa)continue;
        dfs2(i.ff,root,len+i.ss);
    }
}

inline void dfs3(int root,int fa,int len){
//    cout<<"rt:"<<root<<'\n';
    if(len>dp[root])dp[root]=len;
    for(auto i:v[root]){
        if(i.ff==fa)continue;
        dfs3(i.ff,root,len+i.ss);
    }
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n;
    for(int i=2;i<=n;++i){
        int a,b;
        cin >>a>>b;
        v[i].eb(m_p(a,b));
        v[a].eb(m_p(i,b));
    }

    dfs(1,0,0);
    dfs2(s1,0,0);
    dfs3(s2,0,0);

//    cout<<s1<<" "<<s2<<'\n';

//    cout<<s1<<" "<<s2<<'\n';
    for(int i=1;i<=n;++i){
         cout<<dp[i]<<" ";
    }
}

/*
6
1 1
1 1
2 4
2 3
3 1

5
1 1
2 1
3 1
1 1
*/