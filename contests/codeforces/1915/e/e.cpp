#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,arr[N],flag;

inline void init(){
	cin >>n;
	for(int i=0;i<n;++i){
        cin >>arr[i];
        if(i & 1)arr[i]*=-1;
    }
}

inline void sol(){
    for(int i=1;i<n;++i)arr[i]+=arr[i-1];
    sort(arr,arr+n);
    for(int i=1;i<n;++i){
        if(arr[i]==arr[i-1] || arr[i]==0 || arr[i-1]==0){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    return;
}

int32_t main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
