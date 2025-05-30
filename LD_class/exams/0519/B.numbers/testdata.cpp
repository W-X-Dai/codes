#include<bits/stdc++.h>
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 1000),dis(1,100000000),d(1,100); 
uniform_int_distribution<long long> n1e2(1,100),n1e3(1,1000),n1e4(1,10000),n1e5(1,100000),n1e7(1,10000000),n1e9(1,1000000000);

inline void testdata(int num){
    cout<<num<<'\n';
    string s="b"+to_string(num)+".in";
    ofstream f(s,ios::trunc);

    int n=10*pow(10,num);
    for(int i=0;i<n;++i){
        f<<n1e9(rd)<<'\n';
    }
    
}


int main(){
    for(int i=1;i<=5;++i)testdata(i);
}