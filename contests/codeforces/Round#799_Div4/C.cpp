#include<bits/stdc++.h>
using namespace std;

const int N=55;
int mp[10][10];

inline void find(int a,int b){
    if(mp[a+1][b+1])
    for(int i=0;i<8;++i){
        if(mp[a-1][b+1] || mp[a+1][b-1]){
            cout<<a<<" "<<b<<'\n';
            return;
        }
        ++a,++b;
    }
    else
    for(int i=0;i<8;++i){
        if(mp[a-1][b-1] || mp[a+1][b+1]){
            cout<<a<<" "<<b<<'\n';
            return;
        }
        ++a,--b;
    }
}

inline void sol(){
    char x;

    for(int i=1;i<=8;++i)
    for(int j=1;j<=8;++j){
        cin >>x;
        if(x=='.')mp[i][j]=0;
        else mp[i][j]=1;
    }
    
    for(int i=1;i<=8;++i)
    for(int j=1;j<=8;++j){
        if(mp[i][j]){
            find(i,j);
            return;
        }
    }
    
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}
