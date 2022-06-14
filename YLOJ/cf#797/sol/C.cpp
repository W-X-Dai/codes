#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define m_p make_pair
#define ff first
#define ss second
#define eb emplace_back

using namespace std;

const int N=2e5+5;
int n,a[N],b[N];


inline void sol(){
    cin >>n;
    for(int i=0;i<n;++i)cin >>a[i];
    for(int i=0;i<n;++i)cin >>b[i];
    
    cout<<b[0]-a[0]<<" ";
    for(int i=1;i<n;++i){
        cout<<min(b[i]-a[i],b[i]-b[i-1])<<" ";
    }
    cout<<'\n';

}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();

}
