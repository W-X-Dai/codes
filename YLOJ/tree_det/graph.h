#include<bits/stdc++.h>
#include "def.h"

using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 1000),dis(1,100000000); 

vector<int> v[100005];

//n nodes and m edges
inline void graph(int n,int m){
    uniform_int_distribution<long long> dist(1,n);
    cout<<n<<" "<<m<<'\n';
    for(int i=0;i<m;++i){
        cout<<dist<<" "<<dist<<'\n';
    }
}