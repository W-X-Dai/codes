///107-2 P3. �_�i�ڰV�m�v (P3.cpp)
///DP - 0/1 knapsack
/*

W = 100
5
45 3990 8890
15 8890 11150
39 5680 18300
47 10690 15120
50 15120 21080
--
3 19780

*/

#include <iostream>
#include <cstring>
#define MAX 30

using namespace std;
void knapsack(int,int);
const int W = 100;
int cp[MAX], weight[MAX];
int cp1[MAX], cp2[MAX];
int value[W + 1];   // �@���}�C�N���F
bool p[MAX][W+1];
int n;
int pick = 0;


int main()
{
    while (cin >> n)
    {
        memset(cp, 0, sizeof(cp));

        for (int i=0; i<n; i++)
        {
            cin >> weight[i] >> cp1[i] >> cp2[i];
            cp[i] = cp2[i]-cp1[i];
        }
        knapsack(n,W);

    }
    return 0;
}



void knapsack(int n, int w)
{
    memset(value, 0, sizeof(value));
    memset(p,false,sizeof(p));
    pick = 0;

    for (int i = 0; i < n; i++)
        for (int j = w; j - weight[i] >= 0; --j)    // �ѫ᩹�e
        {
            //value[j] = max(value[j], value[j - weight[i]] + cp[i]);
            if (value[j-weight[i]] + cp[i] > value[j])
            {
                value[j] = value[j-weight[i]] + cp[i];
                p[i][j] = true;
            }
        }


    // ���^�f���A�D�X�Ҧ���J�����~�C
    for (int i = n-1, j = w; i >= 0; --i)
        if (p[i][j])    // �I�]���Ӫ��~
        {
            //cout << "�I�]�̭�����" << i << "�Ӫ��~" << endl;
            j -= weight[i];
            pick++;
        }

    //cout << "������_�i�ڼ�" << " " << "�_�i�ڰV�m�v���̤j�g���";
    cout << pick << " " << value[w] << endl;

}

/*
5
45 3990 8890
15 8890 11150
39 5680 18300
47 10690 15120
50 15120 21080
3 19780

1
90 1000 1500
1 500

2
50 100 10000
50 100 9000
2 18800

3
105 10 1000
205 1000 10000
305 3000 3450
0 0

4
35 1000 2000
15 50 500
90 1000 5000
10 30 400
2 4370

10
10 100 1000
20 100 2000
30 100 3000
40 100 4000
30 100 2500
20 100 1500
10 100 1200
15 100 3050
25 100 9000
35 100 8500
5 22250
*/
