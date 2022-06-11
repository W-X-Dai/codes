#include<bits/stdc++.h>
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 100); 


inline void gen(int num){
    cout<<num<<'\n';
    string s1=to_string(num)+".in";
    string s2=to_string(num)+".out";

    ofstream f1(s1,ios::trunc);
    ofstream f2(s2,ios::trunc);

    int n=dist(rd);
    
    f1<<n<<'\n';
    for(int i=0;i<n;++i){
        int a=dist(rd),b=dist(rd);
        f1<<a<<" "<<b<<'\n';
        
        int tmp=a%b;
        if(tmp*2>=b)f2<<a/b+1<<'\n';
        else f2<<a/b<<'\n';        
    }
    
}

int main(){
    for(int i=1;i<=5;++i)gen(i+5);
}