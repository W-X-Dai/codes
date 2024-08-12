#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,m,k,a[N],b[N];

inline void init(){
	cin >>n>>m>>k;
	for(int i=0;i<n;++i)cin >>a[i];
    for(int i=0;i<m;++i)cin >>b[i];
    sort(a,a+n);sort(b,b+m);
}

inline void sol(){
    set<int> as,bs;
    for(int i=0;i<n;++i){
        if(a[i]<=k)as.insert(a[i]);
    }
    for(int i=0;i<m;++i){
        if(b[i]<=k)bs.insert(b[i]);
    }

    int an=0,bn=0,tn=0;
    for(int i=1;i<=k;++i){
        if(as.count(i)==0 && bs.count(i)==0){
            cout<<"NO\n";
            return;
        }
        if(as.count(i)==1 && bs.count(i)==0)++an;
        if(as.count(i)==0 && bs.count(i)==1)++bn;
        if(as.count(i)==1 && bs.count(i)==1)++tn;
    }
//    cout<<an<<" "<<bn<<'\n';
    if(an==bn)cout<<"YES\n";
    else if(min(an,bn)+tn>=max(an,bn))cout<<"YES\n";
    else cout<<"NO\n";
    return;    
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
