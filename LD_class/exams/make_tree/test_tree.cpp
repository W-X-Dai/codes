#include<bits/stdc++.h>
#define eb emplace_back

using namespace std;

vector<int> v[1000005];
int n,a,b,root[1000005],parent[1000005],ok;
int vis[1000005];

inline void dfs(int rt){
    if(vis[rt])ok=1,cout<<"wrong\n";
    vis[rt]=1;
    for(int i:v[rt]){
        dfs(i);
    }
}

int main(){
    freopen("tree.test","r",stdin);

    cin >>n;
    for(int i=1;i<n;++i){
        cin >>a>>b;
        v[a].eb(b);
        root[b]++;
        parent[b]=a;
    }
    int cnt=0;

    for(int i=1;i<=n;++i){
        if(root[i]>1)cout<<"wrong\n",ok=1;
        if(root[i]==0)++cnt,root[0]=i;
    }
    dfs(root[0]);
    for(int i=1;i<=n;++i){
        if(vis[i]==0){
            cout<<"wrong\n";
            ok=1;
        }
    }

    cout<<"pt:"<<n<<'\n';
    cout<<cnt<<'\n';
    if(cnt!=1)ok=1;
    if(!ok)cout<<"ok\n";
}