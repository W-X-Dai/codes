#include "testlib.h"
#include<string.h>
using namespace std;
int main(int argc, char * argv[]){
	registerTestlibCmd(argc, argv);

    string a = inf.readString();
    string b = ouf.readString();
	
    int AC=1;

    if(a.size()!=b.size()){
        quitf(_wa,"The length of your answer isn't correct.");
        return 0;
    }
    for(int i=0;i<a.size();++i){
        if(!AC)break;
        if(a[i]=='(' || a[i]==')')
            if(b[i]!=a[i])AC=0;
        if(b[i]!='(' && b[i]!=')'){
            quitf(_wa,"You change the question");
        }
    }

    int cntl=0,cntr=0;
    for(int i=0;i<b.size();++i){
        if(!AC)break;
        if(b[i]=='(')++cntl;
        else ++cntr;
        if(cntr>cntl){
            quitf(_wa,"the number of ) is bigger than (");
            return 0;
        }
    }
    if(cntr!=cntl){
        quitf(_wa,"you have %d ( and %d )",cntl,cntr);
        return 0;
    }


    quitf(_ok,"congratulations!");
}