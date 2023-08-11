#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    
    int n=rnd.next(1,10000);
    
    cout<<n<<'\n';
    for(int i=0;i<n;++i){
        int a=rnd.next(1,2147483647);
        cout<<a<<'\n';
    }
    return 0;
}


