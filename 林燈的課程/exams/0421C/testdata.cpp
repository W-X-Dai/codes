#include<bits/stdc++.h>
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 9999),dis(1,100000); 

inline void testdata(int num){
    string s1="C"+to_string(num)+".in";
    string s2="C"+to_string(num)+".out";
    ofstream f1(s1,ios::trunc),f2(s2,ios::trunc);

    
    f1<<100000<<" ";
    int arr[100005];
    for(int i=1;i<=100000;++i){
        arr[i]=dist(rd);
    }

    int l,r;
    l=dis(rd),r=dis(rd);l=100000,r=100000;
    if(l>r)swap(l,r);f2<<l<<" "<<r<<'\n';
    long long cnt=0;
    for(int i=l;i<=r;++i)cnt+=arr[i];
    f1<<cnt<<'\n';
    for(int i=1;i<=100000;++i)f1<<arr[i]<<" ";
    f1<<'\n';
}

int main(){
    for(int i=14;i<15;++i)testdata(i);
}