#include<bits/stdc++.h>
#define eb emplace_back

using namespace std;

int n,a,arr[200005];//arr[i]:i的下屬數量
vector<int> v[200005];

inline void dfs(int root){
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
    for(int i=1;i<=n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

/*

i的下屬:2 3 4
arr[i]=arr[2]+1+arr[3]+1+arr[4]+1


*/


/*
for(int i:v[root]);

for(int i=0;i<v[root].size();++i){
    dfs(v[root][i]);
    arr[root]+=arr[v[root][i]]+1;
}


*/