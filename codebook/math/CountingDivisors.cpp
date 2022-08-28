#include<bits/stdc++.h>
#define eb emplace_back
#define pii pair<int,int>
#define m_p make_pair
#define ff first
#define ss second
using namespace std;

int n,x;
vector<pii> v;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>n;
    for(int i=0;i<n;++i){
        cin >>x;
        for(int k=1;k*k<=x;++k){
            if(x%k==0)v.eb(m_p(k,x/k));
        }
        int tmp=v.size()<<1;
        if(v[v.size()-1].ff==v[v.size()-1].ss)--tmp;
        cout<<tmp<<'\n';
        v.clear();
    }
}