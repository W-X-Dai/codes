/* Generated by powerful Codeforces Tool
 * Author: W_X_Dai
 * Time: 2022-10-16 22:35:02
**/

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
string s;
char x;

inline void init(){
    s.clear();
	cin >>n>>x>>s;
    s+=s,n<<=1;
}

inline void sol(){
	if(x=='g'){
        cout<<0<<'\n';
        return;
    }
    
    int cn=0,id,mx=1;//current id chrrent n
    for(id=0;x!=s[id];++id);
//    cout<<s<<'\n';
    while(id<(n>>1)){
    //    cout<<id<<" "<<cn<<'\n';
        if(s[id+1]!='g'){
            ++id,++cn;
        }else{
            mx=max(mx,cn+1);
            ++id,cn=0;
            for(;x!=s[id];++id);
        }
    }
    while(id<n){
    //    cout<<id<<" "<<cn<<'\n';
        if(s[id+1]!='g'){
            ++id,++cn;
        }else{
            mx=max(mx,cn+1);
            cout<<mx<<'\n';
            return;            
        }        
    }
    cout<<mx<<'\n';
    return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
