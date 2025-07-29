#include<bits/stdc++.h>
using namespace std;

int mp[1005][1005];
int n,m;

inline void warshall(){
    for(int k=0;k<n;++k)
    for(int i=0;i<n;++i)
    for(int j=0;j<n;++j)
    	mp[i][j]=min(mp[i][j],mp[i][k]+mp[k][j]);
} 


int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j)
            cin >>mp[i][j];
    }
    warshall();
    for(int i=0;i<m;++i){
        int a,b;
        cin >>a>>b;--a,--b;
        cout<<mp[a][b]<<'\n';
    }
    return 0;
}