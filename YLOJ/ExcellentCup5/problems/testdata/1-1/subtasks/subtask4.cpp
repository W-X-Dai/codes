#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc , char* argv[]){
    rnd.setSeed(atoi(argv[1]));
    cout<<2<<'\n';
    cout<<rnd.next(1,1000);
    if(rnd.next(1,100)%2)cout<<"+";
    else cout<<"-";
    cout<<rnd.next(1,1000);
    return 0;
}


