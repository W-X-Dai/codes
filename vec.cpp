#include<bits/stdc++.h>
using namespace std;

const int N=100010;

vector<int> g[N];
int h[N],ind[N];
long long ans=0;

void dfs(int n,int p){
    int mx=0;
    
    if(g[n].empty()){
        return;
    }

    for(auto u:g[n]){//for(int i=0;i<g[n].size();++i)
        dfs(u,n);
        mx=max(mx,h[u]);
    }

    h[n]=mx+1;
    ans+=h[n];
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);

    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        int cn;
        cin>>cn; 
        for(int j=0;j<cn;++j){
            int c;
            cin>>c;
            g[i].emplace_back(c);
            ind[c]++;
        }
    }

    int rt;
    for(int i=1;i<=n;++i){
        if(ind[i]==0){
            rt=i;
            break;
        }
    }

    dfs(rt,0);

    cout<<rt<<"\n"<<ans<<"\n";
}