#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define m_p make_pair
#define ff first
#define ss second
#define eb emplace_back

using namespace std;

const int N=2e5+5;
int n,k,arr[N],pre[N];

inline int sum(int l,int r){
    return pre[r]-pre[l-1];
}

inline void sol(){
    cin >>n>>k;
    for(int i=1;i<=n;++i){
        char x;
        cin >>x;
        if(x=='B')arr[i]=0;
        else arr[i]=1;
        pre[i]=arr[i]+pre[i-1];
    }
    int mi=0x3f3f3f3f;
    for(int i=1;i<=n-k+1;++i){
        mi=min(mi,sum(i,i+k-1));
    }
    cout<<mi<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();

}
