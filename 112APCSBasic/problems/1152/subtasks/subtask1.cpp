#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    
    long long a=rnd.next(1,10000000),b=rnd.next(1,10000000);

    cout<<a*b<<" "<<(a+b)*2<<'\n';

    return 0;
}


