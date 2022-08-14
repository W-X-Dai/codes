#include<bits/stdc++.h>
using namespace std;

int n,c,x;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>c;
    for(int i=0;i<n;++i){
        cin >>x;
        cout<<min(100,x+c)<<" \n"[i==n-1];
    }
    return 0;
}