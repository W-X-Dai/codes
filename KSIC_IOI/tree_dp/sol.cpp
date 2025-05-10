#include<bits/stdc++.h>
#define eb emplace_back
#define int long long
using namespace std;

vector<int> v[1005];
int n, m, arr[1005], dp[1005][1005][2];
int root, rt[1005];

void dfs(int u){
    //initialization
    for(int i=0;i<=m;++i) dp[u][i][0]=dp[u][i][1]=-1e9;
    dp[u][0][0]=0;
    dp[u][1][1]=arr[u];
    for(int x:v[u]){
        dfs(x);
        int tmp[1005][2];
        for(int i=0;i<=m;++i)tmp[i][0]=dp[u][i][0], tmp[i][1]=dp[u][i][1];
        for(int i=0;i<=m;++i){
            for(int j=0;i+j<=m;++j){
                //not pick u, pick x or not pick x
                tmp[i+j][0]=max(tmp[i+j][0], dp[u][i][0]+max(dp[x][j][0],dp[x][j][1]));
                //pick u, not pick x
                if(i>=1)tmp[i+j][1]=max(tmp[i+j][1], dp[u][i][1]+dp[x][j][0]);
            }
        }
        for(int i=0;i<=m;++i)dp[u][i][0]=tmp[i][0], dp[u][i][1]=tmp[i][1];
    }
}

int32_t main(){
    cin >>n>>m;
    for(int i=1;i<=n;++i)cin >>arr[i];
    for(int i=0;i<n-1;++i){
        int a, b;
        cin >>a>>b;
        v[a].eb(b);
        rt[b]=1;
    }
    //find the root
    for(int i=1;i<=n;++i){
        if(!rt[i]){
            root=i;
            break;
        }
    }
    dfs(root);
    cout<<max(dp[root][m][0], dp[root][m][1])<<'\n';
    return 0;
}