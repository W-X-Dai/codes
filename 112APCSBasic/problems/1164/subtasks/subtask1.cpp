#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    
    int b=rnd.next(0,1000000);
    int a=rnd.next(0,1000000);
    cout<<max(a,b)<<' '<<min(a,b);

    return 0;
}


