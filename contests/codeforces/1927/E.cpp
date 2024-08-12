#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,k;

inline void init(){
	cin >>n>>k;
}

inline void sol(){
	int position,arr[n+5],a=0,b=n+1;
    
    for(int i=0;i<k;++i){
        position=i;
        while(position<n){
            if(i%2)arr[position]=++a;
            else arr[position]=--b;
            position+=k;
        }
    }

    for(int i=0;i<n;++i)cout<<arr[i]<<" ";
    cout<<'\n';
    return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
