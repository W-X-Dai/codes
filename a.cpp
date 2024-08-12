#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

struct side{
	int a,b,c;
};

vector<side> v;

int a,b,c,k;

inline void d(){
	for(int i=1;i*i<=k;++i){
		if(k%i==0){
			int q=k/i;
			for(int j=i;j*j<=q;++j){
				if(j*j==q){
					side x;x.a=i,x.b=j,x.c=j;
					v.eb(x);
					break;
				}
				if(q%j==0){
					int t=q/j;
					side x;x.a=i,x.b=t,x.c=j;
					v.eb(x);
				}
			}
		}
	}
}

inline void init(){
	cin >>a>>b>>c>>k;
}

inline void sol(){
	v.clear();
	d();
	int mx=0;
//	for(auto i:v)cout<<i.a<<" "<<i.b<<" "<<i.c<<'\n';
	int arr[2];
	int sss[6][3]={{1,2,3},{1,3,2},{2,1,3},{2,3,1},{3,1,2},{3,2,1}};
	for(auto x:v){
		
		for(int ii=0;ii<6;++ii){
			arr[0]=x.a;arr[1]=x.b;arr[2]=x.c;
			// if(arr[s[ii][0]-1]<=a) 
			// 	if(arr[s[ii][1]-1]<=b && arr[s[ii][2]-1]<=c){
			
			// 	mx=max(mx,(a-arr[s[ii][0]-1]+1)*(b-arr[s[ii][1]-1]+1)*(c-arr[s[ii][2]-1]+1));
			// }
			cout<<sss[0][0]<<" ";
		//	cout<<arr[0]<<'\n';

		}
		
	}

	cout<<mx<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
