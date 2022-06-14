#include<bits/stdc++.h>
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(6, 100000),dis(1,9999); 


inline void gen(int num){
    cout<<num<<'\n';
    string m=to_string(num)+".in";
    string s=to_string(num)+".out";
    ofstream f(m,ios::trunc);
    ofstream f1(s);
    
    f<<199900<<'\n';
    for(int i=0;i<199900;++i){
        f<<dist(rd)<<'\n';
    }
}

inline void ans(int num){
    cout<<num<<'\n';
    string m=to_string(num)+".in";
    string s=to_string(num)+".out";
    ifstream f1(m);
    ofstream f2(s,ios::trunc);

    int t;f1>>t;

    for(int i=0;i<t;++i){
        int n,x;f1 >>n;x=n/3;
        if(n%3==1)f2<<x+2<<'\n';
        if(n%3==2)f2<<x+2<<'\n';
        if(n%3==0)f2<<x+1<<'\n';        
    }



}

int main(){
    for(int i=1;i<=1;++i)ans(i);
}