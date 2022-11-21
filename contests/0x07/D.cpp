#include<bits/stdc++.h>
#define pii pair<int,int> 
#define x first
#define y second
using namespace std;

string s[35];
int mp[37][32],mi=0x3f3f3f3f;
pii m;


inline int dist(int x,int y){
    return max(abs(m.x-x),abs(m.y-y));
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    for(int i=0;i<30;++i)cin >>s[i];
    for(int i=0;i<30;++i)
    for(int j=0;j<25;++j){
        if(s[i][j]=='M'){
            m.x=i,m.y=j;
            break;
        }
    }
//    cout<<m.x<<" "<<m.y<<'\n';
    for(int i=0;i<30;++i){
        for(int j=0;j<25;++j){
            if(s[i][j]=='P'){
                 mi=min(mi,dist(i,j));
                // cout<<i<<" "<<j<<" ";
                // cout<<dist(i,j)<<'\n';
            }
        }
    }
    cout<<mi+2<<'\n';
    return 0;

}