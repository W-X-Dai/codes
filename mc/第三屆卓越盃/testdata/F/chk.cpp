#include "testlib.h"
#include<string.h>
using namespace std;
int main(int argc, char * argv[]){
	registerTestlibCmd(argc, argv);

    string a = ouf.readString();
    string b = ans.readString();
	
    int n=0;
    double score=0;
    for(int i=0;i<20;++i)n+=(a[i]==b[i]);

    if(n<=5)score=n*2;
    else if(n<=10)score=10+(n-5)*4;
    else if(n<=15)score=30+(n-10)*6;
    else score=60+(n-15)*8;

    if(a.size()!=20)score=0;

    if(n==100)quitf(_ok,"congratulations!");
    else quitp(ceil(100.0 * score / 100.0) / 100, "oh no~");

}