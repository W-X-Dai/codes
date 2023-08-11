#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    
    int n=rnd.next(500,10000);
    cout<<n<<'\n';
    for(int i=0;i<n;++i){
        cout<<rnd.next(0,9)<<" \n"[i==n-1];
    }
    cout<<stoi(argv[1])-1<<'\n';
    
    
    return 0;
}


