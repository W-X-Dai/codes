#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;

int main(int argc , char* argv[]){
    rnd.setSeed(atoi(argv[1]));
    int n=rnd.next(50,1000);cout<<n<<'\n';
    cout<<rnd.next(1,1000);
    for(int i=0;i<n-1;++i){
        if(rnd.next(1,100)%2)cout<<"+";
        else cout<<"-";
        cout<<rnd.next(1000);
    }

    return 0;
}