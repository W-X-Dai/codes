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
string s;

inline void init(){
  	cin >>s;n=s.size();
	for(int i=0;i<s.size();++i)arr[i]=s[i]-'0';
}

inline void sol(){
	for(int i=0;i<n;++i){
		int mx=arr[i],mx_id=i;
		for(int j=1;j<=9;++j){
			int pt=i+j;
			if(pt>n-1)break;
			if(arr[pt]-j>mx){
				mx=arr[pt]-j;
				mx_id=pt;
			}
		}
		for(int j=mx_id;j>i;--j){
			swap(arr[j],arr[j-1]);
		}
		arr[i]=mx;
	}
	for(int i=0;i<n;++i)cout<<arr[i];
	cout<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)
    init(),sol();
    return 0;
}