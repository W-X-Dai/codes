#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define N 500005 
#define x first
#define y second

using namespace std;

vector<pii> v[N];
ll mxn,s;
bool vis[N];


void dfs(ll root,ll mx){
    
    int n=v[root].size();

    if(mx>mxn)s=root,mxn=mx;
    for(int i=0;i<n;++i){
        if(vis[v[root][i].x]==0){
            vis[root]=1;
            dfs(v[root][i].x,mx+v[root][i].y);
        }
    }
}

int main(){
    int n,a,b,w;

    cin >>n;
    for(int i=0;i<n-1;++i){
        cin >>a>>b>>w;
        v[a].push_back(make_pair(b,w));
        v[b].push_back(make_pair(a,w));
    }

    dfs(1,0);mxn=0;
    memset(vis,0,n);
    dfs(s,0);

    cout<<mxn<<'\n';
}