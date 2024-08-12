#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    
    cout<<rnd.next(100000,1000000)<<'\n';
    
    
    return 0;
}


