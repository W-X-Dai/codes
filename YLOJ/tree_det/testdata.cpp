#include<bits/stdc++.h>
#include"random_root_tree.h"

using namespace std;

//n nodes and m edges
inline void graph(int n,int m){
    uniform_int_distribution<long long> disst(1,n);
    ofstream f("t1.in",ios::app);

    f<<n<<" "<<m<<'\n';
    for(int i=0;i<m;++i){
        f<<disst(rd)<<" "<<disst(rd)<<'\n';
    }
}

inline void testdata(){
    freopen("t1.in","w",stdout);
    cout<<10<<'\n';
    for(int i=0;i<10;++i){
        if(rand()%2)make_tree(90,"t1.in");
        else graph(90,70);
    }
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    testdata();
}