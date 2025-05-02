#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

vector<int> v[6005];
int n, cnt, root, arr[6005], rt[6005], dp[6005][2];

inline void dfs(int root){
	for(int i:v[root])dfs(i);

	dp[root][1]=arr[root];
	dp[root][0]=0;

	for(int i:v[root]){
		dp[root][1]+=dp[i][0];
		dp[root][0]+=max(dp[i][0], dp[i][1]);
	}
}

int main() {
	cin >>n;
	for(int i=1;i<=n;++i)cin >>arr[i];

	for(int i=0;i<n-1;++i){
		int a, b;
		cin >>a>>b;
		v[b].eb(a);
		rt[a]=1;
	}

	for(int i=1;i<=n;++i){
		if(!rt[i]){
			root=i;
			break;
		}
	}

	dfs(root);
	cout<<max(dp[root][0], dp[root][1])<<'\n';

}
