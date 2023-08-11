#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    
    int n=rnd.next(70000,100000),q=rnd.next(70000,100000);
    cout<<n<<" "<<q<<'\n';
    for(int i=0;i<n;++i){
        cout<<rnd.next(100000,1000000)<<" \n"[i==n-1];
    }    
    for(int i=0;i<q;++i){
        long long a=rnd.next(1,n),b=rnd.next(1,n);
        if(a>b)swap(a,b);
        cout<<a<<" "<<b<<'\n';
    }
    
    
    return 0;
}


