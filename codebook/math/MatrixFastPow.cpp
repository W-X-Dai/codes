#include<bits/stdc++.h>
#define ll long long
using namespace std;

//|a1 b1|
//|a2 b2|
struct matrix{
    ll a1,a2,b1,b2;
    inline void I(){
        a1=1,a2=0;
        b1=0,b2=1;
    }
};

inline matrix fastPow(matrix a,ll b){
    matrix res;res.I(); 
     while(b>0){
         if(b & 1)res=(res*a)%mod;
         a=(a*a)%mod;
         b>>=1;
     }
     return res;
}


int main(){

}