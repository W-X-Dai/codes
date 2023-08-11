#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    
    int n=rnd.next(2,200000),t=rnd.next(500,600);
    cout<<n<<'\n';
    for(int i=0;i<n;++i){
        cout<<rnd.next(1,99999)<<" \n"[i==n-1];
    }
    cout<<t<<'\n';
    for(int i=0;i<t;++i){
        cout<<rnd.next(1,n)<<" "<<rnd.next(1,n)<<'\n';
    }
    
    
    return 0;
}


