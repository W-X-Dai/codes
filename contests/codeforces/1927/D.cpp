#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,q,l,r,arr[N];

inline void init(){
	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i];
}

inline void sol(){
    vector<int> v;
    int current=arr[0],currentid=0;
    for(int i=0;i<n;++i){
        if(arr[i]!=current){
            v.eb(i);current=arr[i];
        }
    }
    v.eb(n);
//    for(int i:v)cout<<i<<" ";

    cin >>q;
    while(q--){
        cin >>l>>r;
        int li=lower_bound(v.begin(),v.end(),l)-v.begin(),ri=lower_bound(v.begin(),v.end(),r)-v.begin();
        if(li!=ri){
            cout<<v[li]<<" "<<v[li]+1<<'\n';
        }else cout<<"-1 -1\n";
    }
    cout<<'\n';
    return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
