#include<bits/stdc++.h>
using namespace std;

inline void hanio(int n,char from,char to,char mid){
    if(n==1){
        cout<<"Move ring 1 from "<<from<<" to "<<to<<'\n';
        return;
    }
    hanio(n-1,from,mid,to);
    cout<<"Move ring "<<n<<" from "<<from<<" to "<<to<<'\n';
    hanio(n-1,mid,to,from);
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n;
    freopen("t.in","w",stdout);
    for(int i=1;i<=15;++i){
    //    hanio(i,'A','C','B');
        cout<<i<<'\n';
    }
}