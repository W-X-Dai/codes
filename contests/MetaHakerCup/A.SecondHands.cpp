#include<bits/stdc++.h>
using namespace std;

int n,k,yes;

inline void sol(int num){
    cin >>n>>k;
    yes=1;
    if((k<<1)<n)yes=0;

    int vis[105]={0};
    for(int i=0;i<n;++i){
        int x;cin >>x;
        ++vis[x];
        if(vis[x]>2){
            yes=0;
        //    break;
        }
    }
    if(yes)cout<<"Case #"<<num<<": YES\n";
    else cout<<"Case #"<<num<<": NO\n";
    
    return;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    freopen("second_hands_input.txt","r",stdin);
    freopen("second_hands_input.out","w",stdout);

    int t;cin >>t;
    for(int i=1;i<=t;++i)sol(i);

    cerr<<"ok!\n";
    return 0;

}