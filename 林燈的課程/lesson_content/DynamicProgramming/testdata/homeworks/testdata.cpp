#include<bits/stdc++.h>
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 100005),dis(1,9999); 


inline void gen(int num){
    cout<<num<<'\n';
    string m=to_string(num)+".in";
    ofstream f(m,ios::trunc);
    
    int n=100000;f<<n<<'\n';
    for(int i=0;i<n;++i)f<<dis(rd)<<" ";f<<'\n';
    for(int i=0;i<n;++i)f<<dis(rd)<<" ";f<<'\n';
    for(int i=0;i<n;++i)f<<dis(rd)<<" ";f<<'\n';
    
}

int main(){
    for(int i=1;i<=10;++i)gen(i);
}