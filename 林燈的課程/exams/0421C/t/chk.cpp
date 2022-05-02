#include "testlib.h"
#define ll long long

int main(int argc, char* argv[])
{
    registerTestlibCmd(argc, argv);

    ll arr[100005],pre[100005];
    ll n,x,l,r,la,ra;

    l=ouf.readInt();      
    r=ouf.readInt();
    
    la=ans.readInt();
    ra=ans.readInt();

    n=inf.readInt();
    x=inf.readInt();
    for(int i=0;i<n;++i){
        arr[i]=inf.readInt();
    }
    for(int i=1;i<=n;++i){
        arr[i]=inf.readInt();
        pre[i]=pre[i-1]+arr[i];
    }

    if (pre[r]-pre[l-1]==x)
        quitf(_ok, "Correct.");
    else
        quitf(_wa, "WA! expect=%d recieve=%d", x, pre[r]-pre[l-1]);
}