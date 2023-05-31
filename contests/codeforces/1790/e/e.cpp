#include <bits/stdc++.h>
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N = 200010;
int S = 18;
int n,m,start;

int fa[N][20]; //crucial!
int arr[N];


vector<int> edges[N];
int dep[N], dis[N];

//f can't be -1, because of dep[f];
void dfs(int x, int f, int d){
    fa[x][0] = f, dep[x] = dep[f] + 1, dis[x] = d;
    for(int i=0; i< edges[x].size();i++){
        int j = edges[x][i];
        if(j==f) continue;
        dfs(j, x, d + 1);
    }
}

void goUp(int &x, int step){
    for(int i=0;i<=S;i++)
        if(step & (1<<i)) x = fa[x][i];
}


int LCA(int a, int b){
    if(dep[a]<dep[b]) swap(a, b);
    goUp(a, dep[a] - dep[b]);
    if(a==b) return a;
    for(int i=S;i>=0;i--){
        if(fa[a][i] != fa[b][i]){
            a = fa[a][i];  b = fa[b][i];
        }
    }
    return fa[a][0];
}

inline void init(){
    cin >>n>>arr[0];S=log2(n)+1;
    for(int i=1;i<n;++i)cin >>arr[i];
    for(int i=1;i<=n;++i)edges[i].clear();
	for(int i=0;i<n-1;++i){
        int a,b;cin >>a>>b;
        edges[a].eb(b);
        edges[b].eb(a);
    }
    cout<<"a";
}

inline void sol(){
    int mini=0x3f3f3f3f;
	dfs(1, 0, 0);
    for(int j=1;j<=S;j++){
        for(int i=1;i<=n;i++)
            fa[i][j] = fa[ fa[i][j-1] ][j-1];
    }
    int a,b;
    for(int i=1;i<n;++i){
        if(mini!=1){
            cin >>a>>b;
            for(int j=0;j<=i;++j){
                a=arr[i],b=arr[j];
                int c=LCA(a,b);
                mini=min(mini,dis[a]+dis[b]-2*dis[c]);
            } 
        }
        cout<<mini<<" ";
    }
}

int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
