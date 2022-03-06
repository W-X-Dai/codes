// undone
#include<bits/stdc++.h>
#define ll long long
#define N 100005
#define pii pair<int,int>
#define x first
#define y second
#define eb emplace_back
#define AC ios::sync_with_stdio(0),cin.tie(0);

using namespace std;

vector<int> v[N];
int len;

void dfs(int root,int mx){

}

int main(){
    int t,n,a,b;

    cin >>t;
    while(t--){
        cin >>n;
        for(int i=0;i<n;++i){
            cin >>a>>b;
            v[a].eb(b);
            v[b].eb(a);
        }
    }
    dfs(1,0);
	
	return 0;
}