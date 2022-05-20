#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[100005],n,x;
long double ave,sig;


inline void sol(int num){
    cout<<num<<'\n';
    string s1="b"+to_string(num)+".in";
    string s2="b"+to_string(num)+".out";
    ifstream f1(s1);
    ofstream f2(s2,ios::trunc);

    int n;
    while(f1 >>n){
        int x=n%3;
        if(x==2)f2<<n/3+1<<'\n';
        else f2<<n/3<<'\n';
    }
}

int main(){
    for(int i=0;i<5;++i)sol(i+1);
}
