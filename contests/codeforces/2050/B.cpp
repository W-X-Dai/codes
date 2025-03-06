#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,arr[N],avg;

inline void init(){
  	cin >>n;avg=0;
  	for(int i=0;i<n;++i)cin >>arr[i],avg+=arr[i];
}

inline void sol(){
	if((avg/n)*n!=avg){
		cout<<"NO\n";
		return;
	}

	avg/=n;
	for(int i=1;i<n-1;++i)arr[i+1]+=arr[i-1]-avg;
	
	if(arr[n-1]!=avg or arr[n-2]!=avg)cout<<"NO\n";
	else cout<<"YES\n";
	return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)
    init(),sol();
    return 0;
}