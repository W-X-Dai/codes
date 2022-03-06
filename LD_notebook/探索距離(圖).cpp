#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,m,s,tot,len,vis[4005],dis[105];
vector<int> v[105];
queue<int> q;

void bfs(){
    vis[s]=1;
    q.push(s);

    while(!q.empty()){
        int x=q.front();
        q.pop();
        dis[s]=0;
        for(int i:v[105]){
            if(!vis[i]){
                dis[i]=dis[x]+1;
                vis[i]=1;
                q.push(i);
                tot++;
                len+=dis[i];
            }
        }
    }
    
    
}

int main(){
    int a,b;

    cin >>n>>m>>s;
    for(int i=0;i<m;++i){
        cin >>a>>b;
        v[a].push_back(b);
    }
    
    bfs();
    cout<<tot<<'\n'<<len<<'\n';
}