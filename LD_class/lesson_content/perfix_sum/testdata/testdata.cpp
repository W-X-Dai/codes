#include<bits/stdc++.h>
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 1000000),dis(1,9999),d(1,100000); 


inline void testdata(int num){
    cout<<num<<'\n';
    string s="t"+to_string(num)+".in";
    ofstream f(s,ios::trunc);

    int n=dis(rd)+90000,m=dis(rd)+90000;
    int a,b;

//    n=10;
    f<<n<<" "<<m<<'\n';
    for(int i=0;i<n;++i){
        f<<dist(rd)<<" ";
    }
    for(int i=0;i<m;++i){
        a=d(rd)%n;b=d(rd)%n;
        if(a>b)swap(a,b);

        f<<a<<" "<<b<<'\n';
    }

    
}

int main(){
    for(int i=1;i<=5;++i)testdata(i);
}