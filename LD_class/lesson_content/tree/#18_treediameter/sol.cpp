#include<bits/stdc++.h>
#define eb emplace_back

using namespace std;

int n,dmx,pt,vis[100005];
vector<int> v[100005];

inline void dfs(int rt,int d){
    vis[rt]=1;
//    cout<<rt<<" "<<d<<'\n';
    if(d>dmx)pt=rt,dmx=d;
    for(int i:v[rt]){
        if(!vis[i])dfs(i,d+1);
    }
}

int main(){
    //ios::sync_with_stdio(0),cin.tie(0);
    freopen("t6.in","r",stdin);
    cin >>n;
    for(int i=0;i<n-1;++i){
        int a,b;
        cin >>a>>b;
        v[a].eb(b);
        v[b].eb(a);
    }
    dfs(1,0);dmx=0;//cout<<pt<<'\n';
    fill(vis+1,vis+1+n,0);
    dfs(pt,0);
    cout<<dmx<<'\n';

}


/*

7
1 2
1 3
2 4
2 5
2 6
3 7

*/