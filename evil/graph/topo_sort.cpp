#include<bits/stdc++.h>
#define eb emplace_back
#define ll long long

using namespace std;

int n,m,a,b,wrong,c[100005];
vector<int> v[100005],topo;
priority_queue<int,vector<int>,greater<int>> pq;

inline void init(){
    while(!pq.empty())pq.pop();
    topo.clear();
    fill(c,c+n+1,0);
    for(int i=0;i<n+1;++i)
        v[i].clear();
}

inline void dfs(int root){
    c[root]=-1;
    topo.eb(root);

    for(int i=0;i<v[root].size();++i){
        int x=v[root][i];
        c[x]-=1;
        if(!c[x])dfs(x);
    }
}

inline void tpsort_ori(){
    cin >>n>>m;init();
    for(int i=0;i<m;++i){
        cin >>a>>b;
        v[a].eb(b);
        ++c[b];
    }

    for(int i=0;i<n;++i)cout<<c[i]<<" ";
    cout<<'\n';
    
    for(int i=0;i<n;++i){
        if(!c[i])dfs(i);
    }

    if(topo.size()!=n)wrong=1;

    if(wrong){cout<<"err\n";return;}

    for(int i:topo){
        cout<<i<<" ";
    }
    cout<<'\n';    
}

inline void dfs1(int root){
    pq.pop();
    cout<<root<<'\n';
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

    for(int i=0;i<n;++i)cout<<c[i]<<" ";
    cout<<'\n';
    
    for(int i=0;i<n;++i){
        if(!c[i])pq.push(i);
    }
    while(!pq.empty()){
        dfs1(pq.top());
    }

    if(topo.size()!=n)wrong=1;

    if(wrong){cout<<"err\n";return;}

    for(int i:topo){
        cout<<i<<" ";
    }
    cout<<'\n';      
}

int main(){
    tpsort_dic();
}
/*
DAG

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