#include<bits/stdc++.h>
#define ll long long
#define eb emplace_back
#define pii pair<int,int>
#define m_p make_pair
#define ff first
#define ss second

using namespace std;

struct E{
    int a;
    int b;
    int w;
}arr[200005];

ll n,m,cnt,fa[200005];

inline void init(){
    for(int i=0;i<200002;++i)fa[i]=i;
}

inline int find(int x){
    if(fa[x]!=x)fa[x]=find(fa[x]);
    return fa[x];
}

inline void _union(int a,int b){
    a=find(a),b=find(b);
    fa[a]=b;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>n>>m;
    for(int i=0;i<m;++i){
        cin >>arr[i].a>>arr[i].b>>arr[i].w;
    }
    sort(arr,arr+m,[](E a,E b){
        return a.w<b.w;
    });

    init();
    for(int i=0;i<m;++i){
        int x=arr[i].a,y=arr[i].b;
        if(find(x)!=find(y)){
        //    cout<<find(x)<<" "<<find(y)<<'\n';
            _union(x,y);
            cnt+=arr[i].w;
        }
    }
    cout<<cnt<<'\n';
}

/*
3 3
3 1 5
1 2 3
2 3 4


7 11
1 2 7
1 4 5
2 4 9
2 3 8
2 5 7
3 5 5
4 5 15
4 6 6
5 6 8
6 7 11
5 7 9
*/