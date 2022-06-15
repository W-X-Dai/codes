#include<bits/stdc++.h>
using namespace std;

const int N=55;

inline void sol(){
    set<int> s;
    int n,x;

    cin >>n;
    for(int i=0;i<n;++i)cin >>x,s.insert(x);

    if(s.size()-n & 1)cout<<s.size()-1<<'\n';
    else cout<<s.size()<<'\n';

}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}
