#include<bits/stdc++.h>
using namespace std;

const int n=1000000000;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> d(-n,n); 


inline void testdata(){
    ofstream f1("t1.in",ios::trunc);
    
    for(int i=0;i<10000;++i){
        for(int j=0;j<4;++j){
            f1<<d(rd)<<" ";
        }
        f1<<'\n';
    }
}

int main(){
    testdata();
}