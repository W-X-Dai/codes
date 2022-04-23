#include<bits/stdc++.h>
#define eb emplace_back

using namespace std;

int mmx,mmi;
int n,q,x,arr[2005],mx[2005],mi[2005];
int vis[2005];
vector<int> v[2005];

inline void w(int root){
    vis[root]=1;
    cout<<"rt"<<root<<'\n';
    if(v[root].empty()){
        mx[root]=arr[root];
        mi[root]=arr[root];
        return;
    }
    int tmx=arr[root],tmi=arr[root];
    for(int i:v[root]){
        if(vis[i])continue;

        if(mx[i]==0)w(i);        
        tmx=max(tmx,mx[i]);
        tmi=min(tmi,mi[i]);
    }
//    cout<<tmx<<" "<<tmi<<'\n';
    mx[root]=tmx;
    mi[root]=tmi;
}

inline void w1(int n){
//    cout<<n<<'\n';
    mmx=max(mmx,arr[n]);
    mmi=min(mmi,arr[n]);
    for(int i=0;i<v[n].size();++i){
        if(!vis[v[n][i]])w1(v[n][i]);
        vis[n];
    }
}

int main(){
//    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>q;
    for(int i=0;i<n-1;++i){
        int a,b;
        cin >>a>>b;
        v[a].eb(b);
        v[b].eb(a);
    }
    for(int i=1;i<=n;++i)cin >>arr[i];


    for(int i=0;i<q;++i){
        cin >>x;
        w(x);
    //    cout<<mmx<<" "<<mmi<<'\n';
        cout<<mx[i]-mi[i]<<'\n';
    }
    for(int i=1;i<=n;++i)cout<<mx[i]<<" ";cout<<'\n';
    for(int i=1;i<=n;++i)cout<<mi[i]<<" ";cout<<'\n';

}