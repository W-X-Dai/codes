#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

vector<int> v[200005];
int n,a,b,arr[200005];

inline void dfs(int root){
//    if(v[root].empty())return;
    for(int i:v[root]){
        dfs(i);
        arr[root]+=arr[i]+1;
    }
}

int main(){
    cin >>n;
    for(int i=2;i<=n;++i){
        cin >>a;
        v[a].eb(i);
    }
    dfs(1);
    for(int i=1;i<=n;++i)cout<<arr[i]<<" ";
    cout<<'\n';
}