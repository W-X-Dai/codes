//cf 1986D
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
	cin >>n;
    char x;
	for(int i=0;i<n;++i){cin >>x;arr[i]=x-'0';}
}

inline void sol(){
	if(n==2){
        cout<<arr[0]*10+arr[1]<<'\n';
        return;
    }
    if(n==3){
        int mi,a=arr[0]*10+arr[1],b=arr[1]*10+arr[2];
        if(arr[2]==1)mi=a;
        else mi=a+arr[2];
        if(a==1)mi=min(mi,arr[2]);
        if(b==1)mi=min(mi,arr[0]);
        if(arr[0]==1)mi=min(mi,b);
        else mi=min(mi,b+arr[0]);
        if(arr[0]==0 || arr[2]==0)mi=0;
        cout<<mi<<'\n';
        return;
    }
    for(int i=0;i<n;++i){
        if(arr[i]==0){
            cout<<0<<'\n';
            return;
        }
    }
    int mx,sum=arr[1]+10*arr[0];
    for(int i=1;i<n-1;++i){
        if(arr[i+1]!=1)sum+=arr[i+1];
    }
    mx=sum;
    for(int i=1;i<n-1;++i){
        sum=0;
        for(int j=0;j<i;++j){
            if(arr[j]!=1)sum+=arr[j];
        }
        if(10*arr[i]+arr[i+1]!=1)
            sum+=10*arr[i]+arr[i+1];
        for(int j=i+2;j<n;++j){
            if(arr[j]!=1)sum+=arr[j];
        }
        if(sum)
        mx=min(mx,sum);
    }
    cout<<mx<<'\n';

}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
