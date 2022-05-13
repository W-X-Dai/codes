#include<bits/stdc++.h>
#include "def.h"
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 1000),dis(1,100000000),d(1,100); 

vector<int> v[1000005];
vector<pii> o;
int arr[1000005],therest,chi;

inline void make_tree(int n,string s){
    o.clear();
    for(int i=0;i<=n;++i)v[i].clear();
    srand(time(0));

    for(int i=1;i<=n;++i)arr[i]=i;
    random_shuffle(arr+1,arr+n+1);
    chi=2;
    for(int i=1;chi<=n;++i){
        int _rand=dist(rd)%d(rd)+1;
        for(int j=1;chi<=n && j<=_rand;++j){
            v[i].eb(chi);
            ++chi;
        }
    }

    for(int i=1;i<=n;++i){
        int tmp=i;
        i=arr[i];
        for(int j:v[i]){
            o.eb(m_p(arr[i],arr[j]));
        }
        i=tmp;
    }
    ofstream f(s,ios::trunc);
    f<<n<<'\n';


    sort(arr+1,arr+n+1);
    random_shuffle(arr,arr+n-1);

    for(int i=0;i<n-1;++i){
        f<<o[arr[i]].ff<<" "<<o[arr[i]].ss<<'\n';
    }


}