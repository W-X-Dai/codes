#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair
#define inf 0x3f3f3f3f

using namespace std;

const int N=2e5+5;

struct edge{
    int v, w;
};

vector<edge> e[N];
int dis[N], vis[N];

void dijkstra(int n, int s){
    fill(dis, dis+N, inf);
    dis[s]=0;
    for(int i=1;i<=n;++i){
        int u=0, min_dis=inf;
        for(int j=1;j<=n;++j)
            if(!vis[j] and dis[j]<min_dis)
                u=j, min_dis=dis[j];
        vis[u]=1;
        for(auto ed:e[u]){
            int v=ed.v, w=ed.w;
            if(dis[v]>dis[u]+w)dis[v]=dis[u]+w;
        }
    }
}


int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);

    return 0;
}