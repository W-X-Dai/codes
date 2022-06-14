#include<bits/stdc++.h>
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(40000,50000),dis(1,1000000000); 


inline void gen(int num){
    cout<<num<<'\n';
    string m="t"+to_string(num)+".in";
    string s="t"+to_string(num)+".out";
    ofstream f1(m,ios::trunc);
    
    f1<<100<<'\n';
    for(int i=0;i<100;++i){
        if(dist(rd) & 1){
            int n=dist(rd),arr[50001];
            for(int i=0;i<n;++i)arr[i]=dis(rd);
            int k=dist(rd);

            f1<<n<<'\n';
            for(int i=0;i<n;++i)f1<<arr[i]<<" \n"[i==n-1];
            for(int i=0;i<n;++i)f1<<max(0,arr[i]-k)<<" \n"[i==n-1];

        }else{
            int n=dist(rd);
            f1<<n<<'\n';
            for(int i=0;i<n;++i)f1<<dis(rd)<<" \n"[i==n-1];
            for(int i=0;i<n;++i)f1<<dis(rd)<<" \n"[i==n-1];
        }
    }
}

const int N=5e4+5;
int n,arr1[N],arr2[N],dif[N];

inline void sol(int num){
    cout<<num<<'\n';
    string m="t"+to_string(num)+".in";
    string s="t"+to_string(num)+".out";
    ifstream f1(m);
    ofstream f2(s,ios::trunc);

    int t;f1 >>t;

        f1 >>n;
        for(int i=0;i<n;++i)f1 >>arr1[i];
        for(int i=0;i<n;++i)f1 >>arr2[i];

        if(n==1){
            if(arr1[0]>=arr2[0])f2<<"YES\n";
            else f2<<"NO\n";
            return;
        }

        int mx=-1;
        for(int i=0;i<n;++i){
            dif[i]=arr1[i]-arr2[i];
            if(dif[i]<0){f2<<"NO\n";return;}
            mx=max(dif[i],mx);
        }
        
        for(int i=0;i<n;++i){
            if(dif[i]<mx && arr2[i]!=0){
                f2<<"NO\n";
                return;
            }
        }

        f2<<"YES\n";

    

}



int main(){
    for(int i=1;i<=1;++i)gen(i);
    for(int i=1;i<=1;++i)sol(i);
}