#include<bits/stdc++.h>
#define ll long long
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 1000000),d(1,100000); 



inline void ans(int num){
    string s1="t"+to_string(num)+".in";
    string s2="t"+to_string(num)+".out";
    ifstream f1(s1);
    ofstream f2(s2,ios::trunc);

    ll arr[100005],pre[100005];pre[0]=0;
    int n,x;
    f1 >>n>>x;
    for(int i=1;i<=n;++i){
        f1 >>arr[i];
        pre[i]=arr[i]+pre[i-1];
    }
//    for(int i=1;i<=n;++i)cout<<pre[i]<<" ";cout<<'\n';
    for(int i=1;i<=n;++i){
        int tmp=lower_bound(pre+1+i,pre+1+n,x-pre[i-1])-pre;
//        cout<<i<<" "<<tmp<<" "<<pre[tmp]-pre[i-1]<<'\n';
        if(pre[tmp]-pre[i-1]==x){
            f2<<i<<" "<<tmp<<'\n';
            return;
        }
    
    }
}

inline void gen(int num){
    cout<<num<<'\n';
    string s1="t"+to_string(num)+".in";
    ofstream f1(s1,ios::trunc);
    string s2="t"+to_string(num)+".out";
    ofstream f2(s2,ios::trunc);

    ll n=dist(rd),ans;n=100000;
    ll arr[100005],pre[100005];
    
    fill(pre,pre+100002,0);
    for(int i=1;i<=n;++i){
        arr[i]=dist(rd);
    }
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n;++i){
        pre[i]=arr[i]+pre[i-1];
    }
    int a=d(rd),b=d(rd);if(a>b)swap(a,b);
    ans=pre[b]-pre[a-1];
    f1<<n<<" "<<ans<<'\n';
    for(int i=1;i<=n;++i)f1<<arr[i]<<" ";
    f1<<'\n';f2<<a<<" "<<b<<'\n';
    

}

int main(){
    for(int i=7;i<=13;++i)gen(i);
}