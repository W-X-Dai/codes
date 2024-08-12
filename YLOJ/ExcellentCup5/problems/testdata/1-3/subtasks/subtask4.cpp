#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc , char* argv[]){
    rnd.setSeed(atoi(argv[1]));
    int n=rnd.next(100000,200000),q=rnd.next(100000,200000);
    cout<<n<<" "<<q<<'\n';

    for(int i=0;i<n;++i)cout<<rnd.next(-1000,1000)<<' ';cout<<'\n';
    while(q--){
        int l=rnd.next(1,n),r=rnd.next(1,n);
        cout<<min(l,r)<<" "<<max(l,r)<<'\n';
    }

    return 0;
}


