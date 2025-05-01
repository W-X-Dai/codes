#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

const int N=200005;

vector<int> v[N];
int n, arr[N], dp[N][2];

void dfs(int x, int parent){
    dp[x][1]=arr[x];
    dp[x][0]=0;

    for(int i:v[x]){
        if(i!=parent)dfs(i, x);
    }
    for(int i:v[x]){
        if(i==parent)continue;
        dp[x][1]+=dp[i][0];
        dp[x][0]+=max(dp[i][0], dp[i][1]);    
        
    }
    return;
}

int main(){
    cin >>n;
    for(int i=1;i<=n;++i)cin >>arr[i];
    for(int i=1;i<n;++i){
        int a,b;
        cin >>a>>b;
        v[a].eb(b), v[b].eb(a);
    }
    dfs(1, 0);
    cout<<max(dp[1][0], dp[1][1])<<'\n';
}