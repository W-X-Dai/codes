#include<bits/stdc++.h>
using namespace std;

int n;
string s;

inline void sol(){
    int solved[27]={0},ans=0;
    cin >>ans>>s;ans=s.size();
    for(auto i:s){
        if(!solved[i-'A'])++ans,solved[i-'A']=1;
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>n;
    while (n--){
        sol();
    }
    return 0;
}