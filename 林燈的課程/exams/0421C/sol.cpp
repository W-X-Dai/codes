#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll arr[100005],pre[100005];
ll n,x;

inline void sol(int num){
    string s1="C"+to_string(num)+".in";
    string s2="C"+to_string(num)+".out";

    ifstream f1(s1,ios::in);
    ofstream f2(s2,ios::trunc);

    
    
}


int main(){
    
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>n>>x;
    for(int i=1;i<=n;++i){
        cin >>arr[i];
        pre[i]=pre[i-1]+arr[i];
    }
//    for(int i=0;i<=n;++i)cout<<pre[i]<<" ";
//    cout<<'\n';
    
    
    for(ll i=0;i<n;++i){
        ll r=x+pre[i];
        ll tmp=lower_bound(pre,pre+n+1,r)-pre;
    //    cout<<r<<" "<<tmp<<'\n';
        if(pre[tmp]==r){
            //cout<<"suc\n";
            cout<<i+1<<" "<<tmp<<'\n';
            return 0;
        }
    }
    cout<<"-1"<<'\n';

    
}

