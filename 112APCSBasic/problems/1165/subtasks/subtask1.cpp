#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    
    int b=rnd.next(1,1000);
    int a=rnd.next(1,1000);
    cout<<a<<" "<<b<<'\n';

    return 0;
}


