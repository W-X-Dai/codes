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
 	string s;
  	cin >>s;n=s.size();
  	for(int i=0;i<n;++i)arr[i]=s[i]-'0';
}

inline void sol(){
	int sum=0,two=0,six=0;
	for(int i=0;i<n;++i){
		sum+=arr[i];
		if(arr[i]==2)++two;
		if(arr[i]==3)++six;
	}
//	cout<<sum<<" "<<two<<" "<<six<<'\n';
	sum%=9;int tmp=10;
	for(int i=0;i<=min(tmp,two);++i){
		for(int j=0;j<=min(tmp,six);++j){
			if((sum+i*2+j*6)%9==0){
				cout<<"YES\n";
				return;
			}
		}
	}

	cout<<"NO\n";
	return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)
    init(),sol();
    return 0;
}
