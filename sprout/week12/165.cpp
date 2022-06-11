#include<bits/stdc++.h>
#define eb emplace_back
#define ll long long

using namespace std;

int n,m,a,b,wrong,c[100005];
vector<int> v[100005],topo;
priority_queue<int,vector<int>,greater<int>> pq;

inline void init(){
    wrong=0;
    while(!pq.empty())pq.pop();
    topo.clear();
    fill(c,c+n+1,0);
    for(int i=0;i<n+1;++i)
        v[i].clear();
}

inline void dfs1(int root){
    pq.pop();
    c[root]=-1;
    topo.eb(root);

    for(int i=0;i<v[root].size();++i){
        int x=v[root][i];
        c[x]-=1;
        if(!c[x])pq.push(x);
    }
}


inline void tpsort_dic(){
    cin >>n>>m;init();

    for(int i=0;i<m;++i){
        cin >>a>>b;
        v[a].eb(b);
        ++c[b];
    }
    
    for(int i=0;i<n;++i){
        if(!c[i])pq.push(i);
    }
    while(!pq.empty()){
        dfs1(pq.top());
    }

    if(topo.size()!=n)wrong=1;

    if(wrong){cout<<"QAQ\n";return;}

    for(int i:topo){
        cout<<i<<" \n"[i==topo.back()];
    }
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)
        tpsort_dic();
}
/*
DAG

4 3
0 2
2 3
1 3

5 6
4 1
0 1
0 2
1 3
2 3
1 2

6 7
4 5
0 5
0 2
5 3
2 3
5 2
4 1

13 15
0 1
2 0
0 5
0 6
6 4
7 6
2 3
3 5
5 4
8 7
6 9
9 10
9 11
9 12
11 12

not a DAG

4 5
0 1
0 2
1 2
3 1
2 3

3 3
0 1
1 2
2 0

5 7
3 4
4 1
0 1
0 2
1 3
2 3
1 2
*/