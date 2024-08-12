#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int a,b;
string mp[N];

inline void init(){
	cin >>a>>b;
    for(int i=0;i<a;++i)
        cin >>mp[i];
}

inline void sol(){
    int x,y,sum=0,sumx[a]={0},sumy[b]={0};
    for(int i=0;i<a;++i)
    for(int j=0;j<b;++j)
        if(mp[i][j]=='#')++sumx[i];
    for(int j=0;j<b;++j)    
    for(int i=0;i<a;++i)
        if(mp[i][j]=='#')++sumy[j];
    
    // for(int i=0;i<a;++i)cout<<sumx[i]<<" ";cout<<'\n';
    // for(int i=0;i<b;++i)cout<<sumy[i]<<" ";cout<<'\n';

    int sumtmp=0,mxtmp=0;
    for(int i=0;i<a;++i)
        if(sumx[i]>sumtmp)sumtmp=sumx[i],mxtmp=i+1;
    x=mxtmp;
    
    sumtmp=0,mxtmp=0;
    for(int i=0;i<b;++i)
        if(sumy[i]>sumtmp)sumtmp=sumy[i],mxtmp=i+1;
    y=mxtmp;
    
    cout<<x<<" "<<y<<'\n';

}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
