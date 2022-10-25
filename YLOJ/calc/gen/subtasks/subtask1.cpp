#include<bits/stdc++.h>
//#include"../testlib.h"
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 1000000),dis(1,9999),d(1,100000); 

int n;

int main(){

    cout<<dis(rd)<<" "<<dis(rd)<<" "<<dis(rd)<<" "<<dis(rd)<<'\n';
    return 0;
}


