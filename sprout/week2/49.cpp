#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

vector<int> v[1000005];
int arr[1000005];

int dfs(int root){
    if(arr[root])return arr[root];
    if(v[root].empty()){arr[root]=1;return 1;}

    for(auto i:v[root]){
        arr[root]+=dfs(i);
    }
    ++arr[root];
    return arr[root];
}

void sol(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n,m,a,b,q;

    cin >>n>>m;
    for(int i=1;i<=n;++i)v[i].clear();
    fill(arr+1,arr+1+n,0);
    for(int i=1;i<=m;++i){
        cin >>a>>b;
        v[a].eb(b);
    }
    cin >>q;
    for(int i=0;i<q;++i){
        cin >>a;
        cout<<dfs(a)<<'\n';
    }
}


int main(){
    int t;
    cin >>t;
    while(t--)sol();
}

/*
test data

3
14 13
1 2
1 3
2 4
2 5
4 9
4 10
10 13
13 14
3 6
3 7 
3 8
6 11
6 12
14
1
2
3
4
5
6
7
8
9
10
11
12
13
14
14 13
1 2
1 3
2 4
2 5
4 9
4 10
10 13
13 14
3 6
3 7 
3 8
6 11
6 12
3
2
1
4
6 4
2 3
1 2
4 5
4 6
3
2
1
4


*/