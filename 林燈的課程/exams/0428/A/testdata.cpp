#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1,1000000000); 

ll mp[2005][2005],n,m,k,q;
string tmp;

inline void testdata(int num){
    cout<<num<<'\n';
    string s1,s2;
    s1="a"+to_string(num)+".in";
    s2="a"+to_string(num)+".out";

    ofstream f1(s1,ios::trunc),f2(s2,ios::trunc);
    m=dist(rd)%2000+1,n=dist(rd)%2000+1;
    k=dist(rd),q=dist(rd)%(m*n);

    memset(mp,0,sizeof(mp));
    for(int i=0;i<2000;++i)mp[i][0]=1;
    for(int i=0;i<2000;++i)mp[0][i]=1;

    cout<<1<<'\n';
    f1<<m<<" "<<n<<" "<<k<<" "<<q<<'\n';
    for(int i=0;i<q;++i){
        ll a,b,c;
        a=dist(rd)%n,b=dist(rd)%m,c=dist(rd);
        f1<<a<<' '<<b<<' '<<c<<'\n';
        if(c>k)mp[a][b]=-1;
    }    
    cout<<2<<'\n';
    for(int i=1;i<m;++i){
        for(int j=1;j<n;++j){
            if(mp[i][j]==-1)mp[i][j]=0;
            else mp[i][j]=(mp[i-1][j]+mp[i][j-1])%mod;
        }
    }
    f2<<mp[m-1][n-1]<<'\n';
    cout<<"end\n";
}

int main(){
    for(int i=1;i<=10;++i)testdata(i);
}