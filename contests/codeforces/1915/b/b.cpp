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

inline void sol(){
	string s;
    cin >>s;
    for(auto i:s){
        if(i=='?'){
            int a=0,b=0,c=0;
            for(auto j:s){
                if(j=='A')a=1;
                if(j=='B')b=1;
                if(j=='C')c=1;
            }
            if(a==0)cout<<"A\n";
            if(b==0)cout<<"B\n";
            if(c==0)cout<<"C\n";
        }
    }
    cin >>s;
    for(auto i:s){
        if(i=='?'){
            int a=0,b=0,c=0;
            for(auto j:s){
                if(j=='A')a=1;
                if(j=='B')b=1;
                if(j=='C')c=1;
            }
            if(a==0)cout<<"A\n";
            if(b==0)cout<<"B\n";
            if(c==0)cout<<"C\n";
        }
    }
    cin >>s;
    for(auto i:s){
        if(i=='?'){
            int a=0,b=0,c=0;
            for(auto j:s){
                if(j=='A')a=1;
                if(j=='B')b=1;
                if(j=='C')c=1;
            }
            if(a==0)cout<<"A\n";
            if(b==0)cout<<"B\n";
            if(c==0)cout<<"C\n";
        }
    }
    return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}
