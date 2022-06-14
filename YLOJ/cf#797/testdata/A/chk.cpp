#include "testlib.h"

int main(int argc, char* argv[])
{
    registerTestlibCmd(argc, argv);

    int t=inf.readInt(),ac=1;
    
    for(int i=0;i<t;++i){
        int a=ouf.readInt(),b=ouf.readInt(),c=ouf.readInt();
        int n=inf.readInt();
        if((a+b)+c!=n){ac=0;break;}
        if(b!=ans.readInt()){ac=0;break;}
        //b>a>c
        if(b<a || b<c){ac=0;break;}
        if(a<c){ac=0;break;}
    }
    
    if (ac)
        quitf(_ok, "Correct.");
    else
        quitf(_wa, "Output Not Correct.");
}
