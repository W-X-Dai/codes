#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[100005],n,x;
long double ave,sig;


inline void sol(int num){
    cout<<num<<'\n';
    string s1="a"+to_string(num)+".in";
    string s2="a"+to_string(num)+".out";
    ifstream f1(s1);
    ofstream f2(s2,ios::trunc);

    f1>>n;ave=0;sig=0;
    for(int i=0;i<n;++i)f1>>arr[i],ave+=arr[i];
    ave/=n;

    for(int i=0;i<n;++i){
        sig+=(arr[i]-ave)*(arr[i]-ave);
    }
    sig/=n;
    sig=sqrt(sig);
    f2<<(int)sig<<'\n';    
}

int main(){
    for(int i=0;i<10;++i)sol(i+1);
}
