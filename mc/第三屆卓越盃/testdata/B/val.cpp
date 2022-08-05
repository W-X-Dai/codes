#include "testlib.h"
using namespace std;

int main(void){
    registerValidation();
    int n;

    inf.readInt(1,100000,"n");
    inf.readEoln();
    
    for(int i=0;i<n;++i)
        inf.readInt(0,n,"B");
    inf.readEoln();

    inf.readEof();
    return 0;
}