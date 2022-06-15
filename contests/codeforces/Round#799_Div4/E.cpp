#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int N=2e5+5;
ll n,x,arr[N],pre[N];

inline void sol(){
    int ans=0x3f3f3f3f;
    cin >>n>>x;

    for(int i=1;i<=n;++i){
        cin >>arr[i];
        pre[i]=arr[i]+pre[i-1];
    }
    for(int i=1;i<=n;++i){
        int tmp=upper_bound(pre+1+i,pre+1+n,x+pre[i-1])-pre-1;
        if(pre[tmp]-pre[i-1]==x){
            int temp=i-1;
            temp+=n-tmp;
            ans=min(ans,temp);
        }
    }
    if(ans==0x3f3f3f3f)cout<<-1<<'\n';
    else cout<<ans<<'\n';    
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}
