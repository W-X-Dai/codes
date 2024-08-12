#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    
    int l=rnd.next(2,1000000000),n=rnd.next(1000,1000000);

    cout<<l<<" "<<n<<'\n';
    for(int i=0;i<n;++i){
        cout<<rnd.next(1,l-1)<<" \n"[i==n-1];
    }
    

    
    
    return 0;
}


