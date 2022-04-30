#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std; 

ll mp[2005][2005],n,m,k,q;
string tmp;
int main(){
    for(int i=0;i<2000;++i)mp[i][0]=1;
    for(int i=0;i<2000;++i)mp[0][i]=1;
        
    cin >>m>>n>>k>>q; 

    for(int i=0;i<q;++i){
        ll a,b,c;
        cin >>a>>b>>c;
        if(c>k)mp[a][b]=-1;
    }

    for(int i=1;i<m;++i){
        for(int j=1;j<n;++j){
            if(mp[i][j]==-1)mp[i][j]=0;
            else mp[i][j]=(mp[i-1][j]+mp[i][j-1])%mod;
        }
    }
    cout<<mp[m-1][n-1]<<'\n';
    
}