#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q,map[105][105]={0};
    int dir[8][2]={{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};
    cin >>n>>q;
    for(int i=0;i<n;++i){
        int a,b;cin >>a>>b;
        map[a][b]=1;
    }
    for(int i=0;i<q;++i){
        int a,b,cnt=0;cin >>a>>b;
        if(map[a][b])cout<<"bomb\n";
        else{
            for(int j=0;j<8;++j){
                cnt+=map[a+dir[j][0]][b+dir[j][1]];
            }
            cout<<cnt<<'\n';
        }
    }
    return 0;
}