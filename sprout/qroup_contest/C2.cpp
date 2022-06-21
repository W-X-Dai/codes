#include<bits/stdc++.h>
#define eb emplace_back
#define int long long

using namespace std;

const int N=5e5+5;

int n,k,mx,arr[N];
vector<int> v[N];

inline int calc(int a,int b){
    return a^b;
}

//cnt:water 
//ori:origin of this segment
//len:how long you go
inline void dfs(int root,int cnt){
    cnt=calc(cnt,arr[root]);
    for(int i:v[root]){
        dfs(i,cnt);
    }
    mx=max(mx,cnt);
}

signed main(){
    ios::sync_with_stdio(0),cin.tie(0);
    
    cin >>n>>k;;
    for(int i=1;i<=n;++i)cin >>arr[i];
    for(int i=2;i<=n;++i){
        int x;cin >>x;
        v[x].eb(i);
    }
    dfs(1,0);
    cout<<mx<<'\n';
}
