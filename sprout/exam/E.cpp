#include<bits/stdc++.h>
#define eb emplace_back

using namespace std;

vector<int> v[300005];
int n,m,q,ans[300005],vis[300005];


inline void dis(int x,int tmp){
    cout<<x<<'\n';
    queue<int> qu;
    vis[x]=1;
    ans[x]=tmp;
    for(int i:v[x]){
        if(!vis[i])qu.push(i);
    }
    while(!qu.empty()){
    //    cout<<qu.front()<<'\n';
        dis(qu.front(),tmp+1);
        qu.pop();
    }
}

int main(){
    cin >>n>>m;
    for(int i=0;i<m;++i){
        int a,b;
        cin >>a>>b;
        v[a].eb(b),v[b].eb(a);
    }
    dis(1,0);
    cin >>q;
    for(int i=0;i<q;++i){
        int a,b;
        cin >>a>>b;
        if(a==b){cout<<0<<'\n';continue;}
        cout<<ans[b]<<'\n';
        
    }
}