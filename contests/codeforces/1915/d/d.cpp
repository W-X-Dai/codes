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

inline bool isC(char x){
    return (x=='b' || x=='c' || x=='d');
}

inline void init(){
	cin >>n>>s;
    for(int i=0;i<n;++i)arr[i]=0;
}

inline void sol(){
	for(int i=0;i<n-1;++i){
        if(isC(s[i])==isC(s[i+1]))arr[i]=1;
        if(isC(s[i])==0 && isC(s[i+1])==1){
            if(i==n-2)break;
            if(isC(s[i+2])==1)arr[i+1]=1;
            else arr[i]=1;
        }
    }
    for(int i=0;i<n;++i){
        cout<<s[i];
        if(arr[i])cout<<".";
    }
    cout<<'\n';
    return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
