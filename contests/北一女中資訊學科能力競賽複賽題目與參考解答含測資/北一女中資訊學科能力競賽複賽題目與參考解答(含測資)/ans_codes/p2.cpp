///107-2 P2. 青蛙變王子 (檔案名稱：P2.CPP)
///DP - LIS

/*
範例輸入1
5
1 2 3 4 3
範例輸出1
4
3

範例輸入2
20
10 12 30 14 36 18 20 25 48 32 79 21 49 78 98 22 1 99 97 2
範例輸出2
11
89

*/

#include <iostream>
using namespace std;
#define MAX 50

int s[MAX];
int length[MAX];
int prev[MAX]; // prev[x] 記錄 s[x] 是接在哪個數字後面
int n;
int sum = 0;
void LIS();
void trace(int);

int main()
{
    while (cin>>n)
    {
        for (int i=0; i<n; i++) cin >> s[i];
        LIS();
        //cout << endl;
        cout << sum << endl;
    }
}


void LIS()
{
    for (int i=0; i<n; i++) length[i] = 1;
    // -1 代表 s[i] 是開頭數字，沒有接在其他數字後面。
    for (int i=0; i<n; i++) prev[i] = -1;

    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (s[i] < s[j])
                if (length[i] + 1 > length[j])
                {
                    length[j] = length[i] + 1;
                    // s[j] 接在 s[i] 後面
                    prev[j] = i;
                }

    int maxlen = 0, pos = 0;
    for (int i=0; i<n; i++)
        if (length[i] > maxlen)
        {
            maxlen = length[i];
            pos = i;
        }

    cout << maxlen << endl;
    sum = 0;
    trace(pos); // 印出一個LIS

}

// 遞迴版本
void trace(int i)
{
    if (prev[i] != -1)
    {
        trace(prev[i]);
        sum += (s[i] - s[prev[i]]);
    }
    //cout << s[i] << ' ';
}

/*
5
1 1 1 1 1
10
10 9 8 7 6 5 4 3 2 1
20
1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1 11
21
67 34 0 69 24 78 58 62 64 5 45 81 27 61 91 95 42 27 36 91 4
7
53 92 82 21 16 18 95
27
26 71 38 69 12 67 99 35 94 3 11 22 33 73 64 41 11 53 68 47 44 62 57 37 59 23 41
9
78 16 35 90 42 88 6 40 42
19
48 46 5 90 29 70 50 6 1 93 48 29 23 84 54 56 40 66 76

--
5
1 1 1 1 1
1
0

10
10 9 8 7 6 5 4 3 2 1
1
0

20
1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1 11
11
10

21
67 34 0 69 24 78 58 62 64 5 45 81 27 61 91 95 42 27 36 91 4
8
95

7
53 92 82 21 16 18 95
3
42

27
26 71 38 69 12 67 99 35 94 3 11 22 33 73 64 41 11 53 68 47 44 62 57 37 59 23 41
8
56

9
78 16 35 90 42 88 6 40 42
4
72

19
48 46 5 90 29 70 50 6 1 93 48 29 23 84 54 56 40 66 76
7
71
*/
