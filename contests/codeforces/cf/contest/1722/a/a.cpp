/* Generated by powerful Codeforces Tool
 * Author: W_X_Dai
 * Time: 2022-08-30 22:51:32
**/

#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=1e5+5;

inline void sol(){
    int mp[5]={},n;
    char x;
    
    cin >>n;
    for(int i=0;i<n;++i){
        cin >>x;
        if(x=='T')++mp[0];
        if(x=='i')++mp[1];
        if(x=='m')++mp[2];
        if(x=='u')++mp[3];
        if(x=='r')++mp[4];
    }

    if(n!=5){
        cout<<"NO\n";
        return;
    }

    for(int i=0;i<5;++i){
        if(mp[i]!=1){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}