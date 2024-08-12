#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,m,a[N],b[N];

inline void init(){
	cin >>n>>m;
	for(int i=0;i<n;++i)cin >>a[i];
	for(int i=0;i<m;++i)cin >>b[i];
	sort(a,a+n),sort(b,b+m);
}

inline void sol(){
	int ans=0,ai=0,aj=n-1,bi=0,bj=m-1;

	for(int i=0;i<min(n,m);++i){
		if(abs(a[ai]-b[bj])>abs(a[aj]-b[bi])){
			ans+=abs(a[ai]-b[bj]);
			++ai,--bj;
		}else{
			ans+=abs(a[aj]-b[bi]);
			++bi,--aj;
		}		
	}

	cout<<ans<<'\n';
	return;

}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
