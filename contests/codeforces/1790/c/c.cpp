#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=120;

int n,arr[N][N],cnt[N];

inline void init(){
    for(int i=0;i<105;++i)cnt[i]=0;
	cin >>n;
	for(int i=0;i<n;++i){
        for(int j=0;j<n-1;++j){
            cin >>arr[i][j];
        }
    }
}

inline void sol(){
    int tar,m=n-1;
    for(int i=0;i<n;++i){
        cnt[arr[i][m-1]]++;
        if(cnt[arr[i][m-1]]==m)tar=arr[i][m-1];
    }
//    cout<<tar<<'\n';
    for(int i=0;i<n;++i){
    //    cout<<arr[i][m-1]<<'\n';
        if(arr[i][m-1]!=tar){
            for(int j=0;j<m;++j){
                cout<<arr[i][j]<<" ";
            }
            cout<<tar<<'\n';
            return;
        }
    }

    
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
