#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;

int main(){
    int n=10000,q=10000;

    cout<<n<<" "<<q<<'\n';
    for(int i=0;i<n;++i){
        cout<<rnd.next(1,1000)<<" \n"[i==n-1];
    }
    for(int i=0;i<q;++i){
        cout<<rnd.next(1,10000)<<'\n';
    }
}