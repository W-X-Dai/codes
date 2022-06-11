#include<bits/stdc++.h>
#define pii pair<int,int>
#define ff first
#define ss second

using namespace std;

int s,t,n,m,r;
int m1[105][105],m2[105][105];


inline pii cmp(int x,int y,int a,int b){
    int cnt=0,sum=0;;
    for(int i=x;i<x+a;++i){
        for(int j=y;j<y+b;++j){
            cout<<">"<<i<<" "<<j<<'\n';
            if(m1[i-x][j-y]!=m2[i][j])++cnt;
            sum+=m1[i-x][j-y]-m2[i][j];
        }
    }
    cout<<sum<<'\n';
    pii rt=make_pair(cnt,abs(sum));
    return rt;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int cnt=0,ans=0x3f3f3f3f;

    cin >>s>>t>>n>>m>>r;
    for(int i=0;i<s;++i){
        for(int j=0;j<t;++j){
            cin >>m1[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >>m2[i][j];
        }
    }
    for(int i=0;i<=n-s;++i){
        for(int j=0;j<=m-t;++j){
            cout<<i<<" "<<j<<'\n';
            pii a=cmp(i,j,s,t);
            if(a.ff<=r)++cnt;
            ans=min(ans,a.ss);
        }
    }
    cout<<cnt<<'\n'<<ans<<'\n';
}
