#include <iostream>

using namespace std;

int main(void) {
    int n;

    cin >> n;
    
        int f[50000];   // 自己的好友是誰
        char g[50000] = {0};  // 有無加入群體

        for(int i = 0; i < n; i++)
            cin >> f[i];

        int grpCnt = 0;     // 紀錄有幾個群體
        int nxt = 0;        // 自己的好友是誰
        for(int i = 0; i < n; i++)
        {
            if(g[i] == 0) // 尚未加入群體
            {
                nxt = i;              // 目前尚未加入群體的人
                do
                {
                    g[nxt] = grpCnt + 1;   // 已加入此群體
                    nxt = f[nxt];       // 換下一位好友
                }while(g[nxt] == 0);
                grpCnt++;               // 已找完群體的人數，所以將群體數加一
            }
        }

        cout << grpCnt << endl;

    
    return 0;
}