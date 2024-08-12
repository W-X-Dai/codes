#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,x;
pii a[N],b[N],c[N];

bool cmp(pii a,pii b){
    return a.ff>b.ff;
}

inline void init(){
	cin >>n;
	for(int i=0;i<n;++i)cin >>x,a[i]=m_p(x,i);
    for(int i=0;i<n;++i)cin >>x,b[i]=m_p(x,i);
    for(int i=0;i<n;++i)cin >>x,c[i]=m_p(x,i);
}

inline void sol(){
    int ans=0;
	sort(a,a+n,cmp);sort(b,b+n,cmp);sort(c,c+n,cmp);
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            for(int k=0;k<3;++k){
                if(a[i].ss!=b[j].ss && b[j].ss!=c[k].ss && a[i].ss!=c[k].ss){
                    ans=max(ans,a[i].ff+b[j].ff+c[k].ff);
                }
            }
        }
    }
    cout<<ans<<'\n';
    return;

}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
