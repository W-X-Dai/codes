#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;


int main(int argc, char* argv[]) {
    rnd.setSeed(stoi(argv[1]));
    
    for(int i=0;i<20;++i){
        cout<<rnd.next(1,49)*2+1<<'\n';
    }
    
    return 0;
}


