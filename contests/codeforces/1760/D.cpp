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
    if(n==1){
        cout<<"YES\n";
        return;
    }

    int up=(arr[1]-arr[0]>0 ? 1 : -1);
    int ch=(up==1 ? 1 : 0);

    for(int i=1;i<n;++i){
        if((arr[i]-arr[i-1])*up<0){
            if(ch==1){
                cout<<"NO\n";
                return;
            }
            ch=1;up*=-1;
        }
    }
    cout<<"YES\n";

}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
