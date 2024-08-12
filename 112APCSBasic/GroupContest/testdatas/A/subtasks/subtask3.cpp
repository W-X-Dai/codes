#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    
    int l=rnd.next(2,1000000000),n=2;

    cout<<l<<" "<<n<<'\n';
    cout<<rnd.next(1,l-1)<<" "<<rnd.next(1,l-1);

    
    
    return 0;
}


