#include <bits/stdc++.h>
using namespace std;

const int N = 505;
const long long NEG = -1e18;

vector<int> v[N];
int n, m, arr[N], rt[N];
long long dp[N][505][2];

void dfs(int root){
    for(int i = 0; i <= m; ++i)dp[root][i][0]=dp[root][i][1]=NEG;
    dp[root][0][0]=0;
    dp[root][1][1]=arr[root];
    for(int x:v[root]){
        dfs(x);
        long long t[505][2];
        for(int i = 0; i <= m; ++i)t[i][0]=t[i][1]=NEG;
        for(int i = 0; i <= m; ++i)
            for(int j = 0; i + j <= m; ++j){
                t[i+j][0]=max(t[i+j][0],dp[root][i][0]+max(dp[x][j][0],dp[x][j][1]));
                if(i>=1)t[i+j][1]=max(t[i+j][1],dp[root][i][1]+dp[x][j][0]);
            }
        for(int i = 0; i <= m; ++i){
            dp[root][i][0]=t[i][0];
            dp[root][i][1]=t[i][1];
        }
    }
}

int main() {
    for(int tid = 0; tid <10; ++tid){
        string iname = "q617_1" + to_string(tid) + ".in";
        string oname = "q617_1" + to_string(tid) + ".out";
        ifstream fin(iname);
        ofstream fout(oname);

        for(int i = 0; i < N; ++i)v[i].clear(), rt[i]=0;
        fin >> n >> m;
        for(int i = 1; i <= n; ++i)fin >> arr[i];
        for(int i = 1; i < n; ++i){
            int a, b;
            fin >> a >> b;
            v[a].push_back(b);
            rt[b]=1;
        }

        int root = 0;
        for(int i = 1; i <= n; ++i)if(!rt[i])root=i;

        dfs(root);

        long long ans=0;
        for(int i = 0; i <= m; ++i)
            ans=max({ans,dp[root][i][0],dp[root][i][1]});
        fout << ans << '\n';
    }
}
