#include<bits/stdc++.h>
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 100),dis(1,100000); 

inline void testdata(int num){
    cout<<num<<'\n';
    string s1="C"+to_string(num)+".in";
    string s2="C"+to_string(num)+".out";
    ifstream f1(s1,ios::in);
    ofstream f2(s2,ios::trunc);
    int n;
    
    f1 >>n;

    int arr[100005];
    for(int i=1;i<=n;++i){
        f1 >>arr[i];
    }

    int l,r;
    l=dis(rd)%n+1,r=dis(rd)%n+1;
    if(l>r)swap(l,r);f2<<l<<" "<<r<<'\n';
    int cnt=0;

    for(int i=l;i<=r;++i)cnt+=arr[i];
    cout<<l<<" "<<r<<" "<<cnt<<'\n';
    f1.close();
    ofstream f(s1,ios::trunc);
    f<<n<<" "<<cnt<<'\n';
    for(int i=1;i<=n;++i)f<<arr[i]<<" ";
    f<<'\n';
}

int main(){
    for(int i=1;i<=3;++i)testdata(i);
}