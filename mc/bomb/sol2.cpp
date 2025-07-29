#include<bits/stdc++.h>
using namespace std;

int mp[1005][1005];

int main(){
    int n, m, tr, tc, num;

    cin >>m>>n>>tr>>tc>>num;
    for(int i=0;i<1001;++i)
    for(int j=0;j<1001;++j)
        mp[i][j]=0;
        
    for(int ii=0;ii<num;++ii){
        int r, c, p;
        
        cin >>r>>c>>p;
        mp[r][c]=1;
        for(int i=0;i<=p;++i){
            for(int j=0;j<=p-i;++j){
                mp[min(1000, r+i)][min(1000, c+j)]=1;
                mp[max(0, r-i)][min(1000, c+j)]=1;
                mp[min(1000, r+i)][max(0, c-j)]=1;
                mp[max(0, r-i)][max(0, c-j)]=1;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cnt+=mp[i][j];
            cout<<mp[i][j];
        }
        cout<<'\n';
    }   
    cout<<cnt<<" "<<(mp[tr][tc] ? "YES\n" : "NO\n");

}