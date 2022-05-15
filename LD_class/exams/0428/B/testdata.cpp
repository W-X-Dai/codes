#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1,3000); 

ll dp[3005][3005],n,m;

inline void testdata(int num){ 
    cout<<num<<'\n';
    string s1="b"+to_string(num)+".in";
    string s2="b"+to_string(num)+".out";
    ofstream f1(s1,ios::trunc),f2(s2,ios::trunc);

    for(int i=0;i<100;++i){
        int n=dist(rd);
        int m=dist(rd);

        if(n<m)swap(n,m);
        f1<<n<<" "<<m<<'\n';
        f2<<dp[n][m]<<'\n';
    }

}

int main(){
    for(int i=1;i<=3000;++i){
        dp[i][1]=i;
    }
    for(int i=2;i<=3000;++i){
        for(int j=2;j<=3000;++j){
            dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;
        }
    }
    
    for(int i=0;i<10;++i)testdata(i+1);
}