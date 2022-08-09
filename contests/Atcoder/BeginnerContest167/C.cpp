#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int n,m,x,mi=0x3f3f3f3f;
int arr[15][15],c[15];

inline string trans(int n){
    int rt[12];
    for(int i=0;i<12;++i){
        rt[i]=n%2;
        n>>=1;
    }
    string s;
    for(int i=11;i>=0;--i){
        s+=(rt[i] ? '1' : '0');
    }
    return s;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);


    cin >>n>>m>>x;
    for(int i=0;i<n;++i){
        cin >>c[i];
        for(int j=0;j<m;++j){
            cin >>arr[i][j];
        }
    }
    
    for(int i=1;i<8192;++i){
        string s=trans(i);
    }
}