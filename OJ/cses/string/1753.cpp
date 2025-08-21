#include<bits/stdc++.h>
#define int long long
using namespace std;
 
const int N=1e6+5, p=1e9+7, x=731;
vector<int> xp(N), inv_xp(N);
vector<int> pre(N);
 
int fpow(int a, int b){
    int res=1;
    while(b>0){
        if(b & 1)res=(res*a)%p;
        a=(a*a)%p;
        b>>=1;
    }
    return res;
}
 
void precompute(int n){
    xp[0]=1;
    for(int i=1;i<=n;++i){
        xp[i]=(xp[i-1]*x)%p;
    }
 
    inv_xp[n]=fpow(xp[n], p-2);
    for(int i=n-1;i>=n;--i){
        inv_xp[i]=inv_xp[i+1]*x%p;
    }
}
 
void prepross(string s){
    pre[0]=(int)(s[0]-'a');
    int now_x=1;
    for(int i=1;i<s.size();++i){
        now_x=now_x*x%p;
        pre[i]=(pre[i-1]+(int)(s[i]-'a')*now_x)%p;
    }
}
 
int query(int a, int b){
    if(a==0)return pre[b];
    int inverse=fpow(fpow(x, a), p-2);
    return ((pre[b]-pre[a-1]+p)*inverse)%p;
}
 
int rolling_hash(string s, string t){
    int ss=s.size(), ts=t.size(), cnt=0;
    if(ts>ss)return 0;
 
    int hash_t=0, now_x=1;
    for(int i=0;i<t.size();++i){
        hash_t=(hash_t+(int)(t[i]-'a')*now_x)%p;
        now_x=(now_x*x)%p;
    }
 
    for(int i=0;i+ts-1<ss;++i){
        int j=i+ts-1;
        cnt+=(query(i, j)==hash_t);
    }
 
    return cnt;
}
 
int32_t main(){
    ios::sync_with_stdio(0), cin.tie(0);
 
    string s, t;
    cin >>s>>t;
 
    prepross(s);
    cout<<rolling_hash(s, t);
 
    return 0;
}