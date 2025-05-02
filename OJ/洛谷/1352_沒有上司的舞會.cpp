#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

vector<int> v[10000];
int n,a,b,arr[10000],dp[10000][2];
int rt[10000],root;

void dfs(int root) {
    for (int i:v[root])dfs(i);
    dp[root][1]=arr[root];
    dp[root][0]=0;
    for (int i:v[root]){
        dp[root][1]+=dp[i][0];
        dp[root][0]+=max(dp[i][0], dp[i][1]);
    }
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>n;
    for(int i=1;i<=n;++i)cin >>arr[i];
    for(int i=0;i<n-1;++i){
        cin >>b>>a;
        v[a].eb(b);
        rt[b]=1;
    }
    for(int i=1;i<=n;++i){
        if(rt[i]==0){
            root=i;
            break;
        }
    }
    dfs(root);
    cout<<max(dp[root][0],dp[root][1])<<'\n';
}