#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    int n=rnd.next(1,20);

    cout<<n<<'\n';
    for(int i=0;i<n;++i){
        cout<<rnd.next(0,100)<<" \n"[i==n-1];
    }

    cout<<rnd.next(1,1000)<<" "<<rnd.next(1,1000)<<" "<<rnd.next(1,1000)<<" "<<rnd.next(1,1000)<<" "<<'\n';
    return 0;
}


