#include<bits/stdc++.h>
#define eb emplace_back

using namespace std;

vector<int> v[100005];
int arr[100005],min=0x3f3f3f3f;

inline void init(int n){
    for(int i=0;i<n;++i)v[i].clear();
    for(int i=0;i<n;++i)arr[i]=0;
}

inline void sol(){
    int n;
    cin >>n;init(n);
    for(int i=0;i<n;++i){
        int a,b;
        cin >>a>>b;
        v[a].eb(b);
        v[b].eb(a);
    }

}

inline int dfs(int root){
    if(v[root].empty())return 1;
}

int main(){
    int t;cin >>t;
    while(t--)sol();
}