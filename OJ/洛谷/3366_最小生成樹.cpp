#include<bits/stdc++.h>
#define int long long
#define eb emplace_back
using namespace std;

struct E{
    int a,b;
    int w;
}arr[200005];

int dsu[200005];
int n,m,cnt;

vector<int> v[5005];
int isV[5005];

inline void init(){
    for(int i=0;i<=n;++i)dsu[i]=i;
}

inline int Find(int x){
    if(x!=dsu[x])dsu[x]=Find(dsu[x]);
    else return x;
}

inline void _unite(int a,int b){
    a=Find(a);
    b=Find(b);
    dsu[a]=b;
}

inline void dfs(int root){
    if(isV[root])return;
    isV[root]=1;
    for(int i:v[root])dfs(i);
    return;
}

signed main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>m;
    for(int i=0;i<m;++i){
        cin >>arr[i].a>>arr[i].b>>arr[i].w;
        int x=arr[i].a,y=arr[i].b;
        v[x].eb(y);
        v[y].eb(x);
    }
    sort(arr,arr+m,[](E a,E b){
        return a.w<b.w;
    });
    dfs(1);
    for(int i=1;i<=n;++i){
        if(!isV[i]){
            cout<<"orz\n";
            return 0;
        }
    }

    init();
    for(int i=0;i<m;++i){
        int x=arr[i].a,y=arr[i].b;
        if(Find(x)!=Find(y)){
            _unite(x,y);
            cnt+=arr[i].w;
        }
    }
    cout<<cnt<<'\n';
}