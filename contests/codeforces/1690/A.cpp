#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define m_p make_pair
#define ff first
#define ss second
#define eb emplace_back

using namespace std;

inline void sol(){
    int n,x;cin >>n;x=n/3;
    if(n%3==1)cout<<x<<" "<<x+2<<" "<<x-1<<'\n';
    if(n%3==2)cout<<x+1<<" "<<x+2<<" "<<x-1<<'\n';
    if(n%3==0)cout<<x<<" "<<x+1<<" "<<x-1<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();

}
