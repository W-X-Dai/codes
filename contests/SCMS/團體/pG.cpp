#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s,t;


inline void bfs(){
    queue<int> q,q1;
    int l1=s.size(),l2=t.size();

    for(int i=0;i<l1;++i){
        if(s[i]==t[0])q.push(i);
    }
    if(q.empty()){
        cout<<"NO\n";
        return;
    }

    cout<<"YES\n";

}

inline void det(int x){
    
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n;
    
    cin >>n;
    for(int i=0;i<n;++i){
        cin >>s>>t;
        bfs();
    }
}