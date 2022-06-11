#include "testlib.h"

int main(int argc, char* argv[])
{
    registerTestlibCmd(argc, argv);

    int pans,jans;
    jans=ans.readLong();      // 读取答案

    long long arr[100005],pre[100005];
    long long n,x;

    pre[0]=0;
    n=inf.readLong();x=inf.readLong();
    for(int i=1;i<=n;++i){
        arr[i]=inf.readInt();
        pre[i]=arr[i]+pre[i-1];
    }

    int l,r,ac=0;
    l=ouf.readLong();r=ouf.readLong();
    
    if(pre[r]-pre[l-1]==x)ac=1;
    
    

    if (ac==1)
        quitf(_ok, "Correct.");
    else
        quitf(_wa, "WA! expect=%d recieve=%d", l,r);
}