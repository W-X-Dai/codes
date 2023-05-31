#include <bits/stdc++.h>
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,s,r,ans[60];

inline void init(){
	cin >>n>>s>>r;
}

inline void sol(){
	ans[0]=s-r;
    int tmp=max(r/(n-1),1);
    for(int i=1;i<n-1;++i)ans[i]=tmp,r-=tmp;
    ans[n-1]=r;

    int rest;
    if(ans[n-1]>ans[0]){
    //     cout<<ans[n-1]<<";"<<ans[0]<<'\n';   
        rest=r-ans[0],ans[n-1]=ans[0];

        for(int i=1;i<n-2;++i){
            if(ans[i]+rest>=ans[0])rest-=(ans[0]-ans[i]),ans[i]=ans[0];
            else {
                ans[i]+=rest;
                break;
            }
        }
    }
    for(int i=0;i<n;++i)cout<<ans[i]<<" \n"[i==n-1];
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
