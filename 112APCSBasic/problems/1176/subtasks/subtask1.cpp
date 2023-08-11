#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    
    int n=rnd.next(1,100),q=rnd.next(1,100);
    cout<<n<<" "<<q<<'\n';
    for(int i=0;i<n+q;++i){
        cout<<rnd.next(1,10)<<" "<<rnd.next(1,10)<<'\n';
    }    
    
    
    return 0;
}


