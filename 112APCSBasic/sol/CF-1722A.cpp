#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,arr[N];

inline void init(){
	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i];
}

inline void sol(){
	char x;int n,t=0,i=0,m=0,u=0,r=0;
    cin >>n;
    for(int ii=0;ii<n;++ii){
        cin >>x;//cout<<x<<'\n';
        if(x=='T')t=1;
        if(x=='i')i=1;
        if(x=='m')m=1;
        if(x=='u')u=1;
        if(x=='r')r=1;
    }
    //cout<<t<<i<<m<<u<<r<<'\n';
    cout<<((t+i+m+u+r==5)&&n==5 ? "YES" : "NO")<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}
