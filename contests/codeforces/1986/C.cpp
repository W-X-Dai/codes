#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair
#define inf 0x3f3f3f3f

using namespace std;

const int N=2e5+5;

int n,m,arr[N];

char a[N],b[N];

inline void init(){
	cin >>n>>m;
	for(int i=1;i<=n;++i)cin >>a[i];
    for(int i=1;i<=m;++i)cin >>arr[i];
    for(int i=1;i<=m;++i)cin >>b[i];
    sort(b+1,b+1+m);
}

inline void sol(){
    set<int> s;
    for(int i=1;i<=m;++i)s.insert(arr[i]);

    int id=1;
    while(!s.empty()){
        a[*s.begin()]=b[id];
        ++id;
        s.erase(*s.begin());
    }
    // for(int i=1;i<=m;++i)cout<<b[i];cout<<'\n';
    // for(int i=1;i<=m-x;++i)cout<<arr[i];cout<<'\n';
    for(int i=1;i<=n;++i)cout<<a[i]<<"";
    cout<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}