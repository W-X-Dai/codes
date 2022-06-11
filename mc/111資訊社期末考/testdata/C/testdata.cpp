#include<bits/stdc++.h>
#define ll long long
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(100000000, 1000000000000); 


inline void gen(int num){
    cout<<num<<" ";
    string s1="t"+to_string(num)+".in";
    string s2="t"+to_string(num)+".out";

    ofstream f1(s1,ios::trunc);
    ofstream f2(s2,ios::trunc);

    ll n=dist(rd),ans;n=100000;
    
    f1<<n<<'\n';
    for(int i=0;i<n;++i){
        f1<<900000000000<<" ";
    }
    f2<<900000000000<<'\n';
}

int main(){
    for(int i=13;i<=13;++i)gen(i);
}