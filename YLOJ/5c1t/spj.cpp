#include <iostream>
#include "testlib.h"

using namespace std;

int main(int argc, char *args[]){
    /**
    inf: 输入文件流
    ouf: 选手输出流
    ans: 标准答案流
    **/
    registerTestlibCmd(argc, args);

    int arr[5][6],a[5];
    for(int i=0;i<5;++i){
        for(int j=0;j<6;++j)
         arr[i][j]=inf.readInt();
    }
    for(int i=0;i<5;++i)a[i]=ouf.readInt();

    int l=-20,r=20;

    int ok=1;
    for(int i=0;i<5;++i){
        int sum=0;
        for(int j=0;j<5;++j){
            sum+=a[j]*arr[i][j];
        }
        if(sum!=arr[i][5]){
            ok=0;continue;
        }
        
    }

    if (ok)
        quitf(_ok, "The answer is correct.");
    else
        quitf(_wa, "The answer isn't correct");
    // quitf(_pe, "The answer is presentation error."); // 格式错误
    // quitf(_fail, "The something wrong cause system error."); // 系统错误
}
