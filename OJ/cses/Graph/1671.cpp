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

int n, m;

vector<pii> v[N];
vector<int> dis(N, inf);

struct cmp{
    bool operator()(pii a, pii b){
        return b.ss>a.ss;
    }  
};


inline void init(){
    cin >>n>>m;
    for(int i=0;i<m;++i){
        int a, b, c;
        cin >>a>>b>>c;
        v[a].eb(m_p(b, c));
    }
    dis[1]=0;
}

inline void sol(){
    priority_queue<pii, vector<pii>, cmp> pq;
    for(auto i:v[1])
        pq.push(i);
    
    while(!pq.empty()){

    }
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    init(),sol();
    return 0;
}

struct edge{
    int v, w;
};

vector<edge> e[N];
int dis[N], vis[N];

void dijkstra(){
    fill(dis, dis+N, 0x3f3f3f3f);

}

/*

struct edge {
    int v, w;
};

vector<edge> e[MAXN];
int dis[MAXN], vis[MAXN];

void dijkstra(int n, int s) {
    memset(dis, 0x3f, (n + 1) * sizeof(int));
    dis[s] = 0;
    for (int i = 1; i <= n; i++) {
        int u = 0, mind = 0x3f3f3f3f;
        for (int j = 1; j <= n; j++)
            if (!vis[j] && dis[j] < mind) u = j, mind = dis[j];
        vis[u] = true;
        for (auto ed : e[u]) {
            int v = ed.v, w = ed.w;
            if (dis[v] > dis[u] + w) dis[v] = dis[u] + w;
        }
    }
}

*/