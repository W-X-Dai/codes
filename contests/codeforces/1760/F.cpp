#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,arr[N],c,d,sum;

inline void init(){
	cin >>n>>c>>d;
	for(int i=0;i<n;++i)cin >>arr[i];
}

inline void sol(){
	sort(arr,arr+n);
    int sum=0;
    for(int i=0;i<min(d,n);++i){
        sum+=arr[n-1-i];
    }
    if(sum>=c){
        cout<<"Infinity\n";
        return;
    }
    
    if(d*arr[n-1]<c){
        cout<<"Impossible\n";
        return;
    }

    int pre[N]={0},k;pre[0]=arr[0];
    for(int i=1;i<n;++i)pre[i]=pre[i-1]+arr[i];

    sum=0;
    for(k=0;k<d;++k){
        if(k+1>=n){
            sum=pre[n-1];
        }else{
            sum=pre[n-1]-pre[n-k-2];
        }

        int tot=sum*(d/(k+1));
        int rest=d%(k+1);
    //    cout<<tot<<" "<<sum<<'\n';
        
        if(rest+1>n){
            tot+=pre[n-1];
        }else tot+=pre[n-1]-pre[n-1-rest];
        if(tot<c){
            --k;
            break;
        }
    }
    cout<<k<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
