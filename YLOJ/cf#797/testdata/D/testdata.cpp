#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(40000,50000),dis(1,1000000000); 


inline void gen(int num){
    cout<<"gen:"<<num<<'\n';
    string m="t"+to_string(num)+".in";
    string s="t"+to_string(num)+".out";
    ofstream f1(m,ios::trunc);
    
    int t=1000;f1<<t<<'\n';
    while(t--){
        int n=rnd.next(90000,100000),k=rnd.next(1,100000);
        string s;
        for(int i=0;i<n;++i){
            if(rnd.next(0,1))s+="W";
            else s+="B";
        }
        f1<<n<<" "<<k<<'\n';
        f1<<s<<'\n';
    }
}

const int N=2e5+5;
int n,k,arr[N],pre[N];

inline int sum(int l,int r){
    return pre[r]-pre[l-1];
}

inline void sol(int num){
    cout<<"sol:"<<num<<'\n';
    string m="t"+to_string(num)+".in";
    string s="t"+to_string(num)+".out";
    ifstream f1(m);
    ofstream f2(s,ios::trunc);

    int t;f1>>t;
    while(t--){
        f1>>n>>k;
        for(int i=1;i<=n;++i){
            char x;
            f1>>x;
            if(x=='B')arr[i]=0;
            else arr[i]=1;
            pre[i]=arr[i]+pre[i-1];
        }
        int mi=0x3f3f3f3f;
        for(int i=1;i<=n-k+1;++i){
            mi=min(mi,sum(i,i+k-1));
        }
        f2<<mi<<'\n';
    }
    return;
}



int main(){
    for(int i=1;i<=1;++i)gen(i);
    for(int i=1;i<=1;++i)sol(i);
    cout<<"done\n";
}