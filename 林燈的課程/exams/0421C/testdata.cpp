#include<bits/stdc++.h>
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 100),dis(1,100000); 

inline void testdata(int num){
    cout<<num<<'\n';
    string s1="C"+to_string(num)+".in";
    string s2="C"+to_string(num)+".out";
    ofstream f1(s1,ios::trunc),f2(s2,ios::trunc);
    int n=dist(rd)%10+90;
    
    f1<<n<<"\n";
    int arr[100005];
    for(int i=1;i<=n;++i){
        arr[i]=dist(rd);
    }
    for(int i=1;i<=n;++i)f1<<arr[i]<<" ";
    f1<<'\n';
}

int main(){
    for(int i=1;i<=3;++i)testdata(i);
}