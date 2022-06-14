#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define m_p make_pair
#define ff first
#define ss second
#define eb emplace_back

using namespace std;

const int N=5e4+5;
ll n,arr1[N],arr2[N],dif[N];

inline void sol(){
    cin >>n;
    for(int i=0;i<n;++i)cin >>arr1[i];
    for(int i=0;i<n;++i)cin >>arr2[i];

    if(n==1){
        if(arr1[0]>=arr2[0])cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }

    ll mx=-1;
    for(int i=0;i<n;++i){
        dif[i]=arr1[i]-arr2[i];
        if(dif[i]<0){cout<<"NO\n";return;}
        mx=max(dif[i],mx);
    }
    
    for(int i=0;i<n;++i){
        if(dif[i]<mx && arr2[i]!=0){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    freopen("t1.in","r",stdin);
    freopen("t1.out","w",stdout);

    int t;cin >>t;
    while(t--)sol();

}
