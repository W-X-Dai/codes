#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 


const int N=5e5+5;
int n,q,a,b,arr[N];

vector<int> v[N];

inline bool det(int l,int r,int x){
    int t=upper_bound(v[x]+l+1,v[x]+r+1,x)-lower_bound(v[x]+l+1,v[x]+r+1,x);
    return t>(r-l+1)/2;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>q;
    for(int i=1;i<=n;++i){
        cin >>arr[i];
        v[arr[i]].eb(i);
    }
    for(int i=0;i<q;++i){
        cin >>a>>b;
        uniform_int_distribution<long long> r(a,b); 
        bool suc=0;

        for(int j=0;j<30;++j){
            int x=r(rd);
            if(det(a,b,arr[x])){
                cout<<arr[x],suc=1;
                break;
            }
        }
        if(!suc)cout<<0<<'\n';
    }
}

/*
7 5
1`1 3 2 3 4 3
1 3 
1 4
3 7
1 7
6 6
*/