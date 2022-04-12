#include<bits/stdc++.h>
#define ll long long
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(2147483645, 2147483647),dis(1,9999); 


int main(){
    ll a,b;
    ofstream f1("a2.in",ios::trunc),f2("a2.out",ios::trunc);

    int n=100000;f1<<n<<'\n';
    for(int i=0;i<n;++i){
        a=dist(rd),b=dist(rd);
        f1<<a<<" "<<b<<'\n';
        f2<<a+b<<'\n';
    }
}