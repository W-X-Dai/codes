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
    int u, v, w;
};

vector<edge> e;
int dis[N];

bool bellman_ford(int n, int s){
    fill(dis, dis+N, inf);
    dis[s]=0;
    bool relax=0;
    for(int i=1;i<=n;++i){
        relax=0;
        for(auto ed:e){
            int u=ed.u, v=ed.v, w=ed.w;
            if(dis[u]==inf)continue;
            if(dis[v]>dis[u]+w){
                dis[v]=dis[u]+w;
                relax=1;
            }
        }
        if(!relax)break;
    }
    return relax;
}


int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);

    return 0;
}