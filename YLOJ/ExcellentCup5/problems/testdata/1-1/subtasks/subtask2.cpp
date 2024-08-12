#include<bits/stdc++.h>
#include"testlib.h"

using namespace std;

int main(int argc , char* argv[]){
    rnd.setSeed(atoi(argv[1]));
    int n=20;
    cout<<n<<'\n';
    cout<<rnd.next(1,200);
    for(int i=0;i<19;++i){
        if(rnd.next(1,5)==3)cout<<"*";
        else if(rnd.next(1,100)%2)cout<<"+";
        else cout<<"-";
        cout<<rnd.next(1,200);
    }

    return 0;
}