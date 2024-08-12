#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

string s;

inline void init(){
	cin >>s;
}

inline bool isupper(char x){
    return (x>='A' && x<='Z');
}

inline void sol(){
	stack<int> u,l;
    for(int i=0;i<s.size();++i){
        if(s[i]!='b' and s[i]!='B'){
            if(isupper(s[i]))u.push(i);
            else l.push(i);
        }
        if(s[i]=='B' and !u.empty())u.pop();
        if(s[i]=='b' and !l.empty())l.pop();
    }
    vector<int> v;
    while(!l.empty())v.eb(l.top()),l.pop();
    while(!u.empty())v.eb(u.top()),u.pop();
    sort(v.begin(),v.end());
    for(int i:v)cout<<s[i];
    cout<<'\n';
    return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
