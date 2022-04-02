#include<bits/stdc++.h>
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 1999),dis(1,100000000); 


inline void gen(int num){
    cout<<num<<'\n';
    string m=to_string(num)+".in";
    ofstream f(m,ios::trunc);
    
    int n=1999;f<<n<<'\n';
    for(int i=0;i<n;++i)f<<dis(rd)<<" ";f<<'\n';
    
}

int main(){
    for(int i=1;i<=10;++i)gen(i);
}