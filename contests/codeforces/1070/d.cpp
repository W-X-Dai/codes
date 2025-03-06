#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,k,arr[N];

inline void init(){
  	cin >>n>>k;
  	for(int i=0;i<n;++i)cin >>arr[i];
}

inline void sol(){
	int cnt=0,rest=0;
	for(int i=0;i<n;++i){
		if(i==n-1){
			cnt+=(arr[i]+rest)/k+(bool)((arr[i]+rest)%k);
		}else if(arr[i]>=(arr[i]+rest)%k){
			cnt+=(arr[i]+rest)/k;
			rest=(arr[i]+rest)%k;
		}else{
			cnt+=(arr[i]+rest)/k+(bool)((arr[i]+rest)%k);
			rest=0;
		}
	}
	cout<<cnt<<'\n';
	return;

}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    while(t--)
    init(),sol();
    return 0;
}