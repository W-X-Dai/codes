///107-2 P4. N度分隔理論 (P4.cpp)
///(圖論、BFS ★★★)
/*
6
0 1 0 0 1 0
1 0 1 0 1 0
0 1 0 1 0 0
0 0 1 0 1 1
1 1 0 1 0 0
0 0 0 1 0 0
--
1.67

*/

///a290: 新手訓練系列 ~ 圖論

#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#define MAX 10005
using namespace std;

int g[MAX][MAX];
bool visited[MAX];
int BFS(int,int);
int N;
double sum_degree = 0;
double degree;
int length[MAX];

int main()
{

    while(cin >> N)
    {
        ///Initialize
        memset(g,0,sizeof(g));

        for (int i=1; i<=N; i++)
            for (int j=1; j<=N; j++)
                cin >> g[i][j];


        sum_degree = 0;
        for (int i=1; i<=N; i++)
            for (int j=1; j<=N; j++)
        {
            if (i!=j)
            {
                int k = BFS(i,j);
                //printf("(%d,%d) = %2d\n",i,j,k);
                sum_degree += k;
            }
        }
        degree = sum_degree / (N*(N-1));
        //printf("%.0f\n",sum_degree);
        printf("%.2f\n",degree);

    }



    return 0;
}

int BFS(int startp, int endp)
{
    queue<int> q;
    //bool found = false;
    memset(length,0,sizeof(length));
    memset(visited,false,sizeof(visited));

    q.push(startp);
    visited[startp] = true;

    while (!q.empty())
    {
        int i = q.front();
        visited[i] = true;
        q.pop();
        if (i==endp)
            return length[i];

        for (int j=1; j<=N; j++)
        {
            if (g[i][j] && !visited[j])
            {
                visited[j]=true;
                q.push(j);
                length[j]=length[i]+1;
            }
        }
    }
    return 0;
}

/*
6
0 1 0 0 1 0
1 0 1 0 1 0
0 1 0 1 0 0
0 0 1 0 1 1
1 1 0 1 0 0
0 0 0 1 0 0
1.67

5
0 1 1 1 1
1 0 1 1 1
1 1 0 1 1
1 1 1 0 1
1 1 1 1 1
1.00

7
0 1 1 0 1 1 1
1 0 1 0 0 0 0
1 1 0 1 1 1 0
0 0 1 0 0 0 0
1 0 1 0 0 1 0
1 0 1 0 1 0 1
1 0 0 0 0 1 0
1.52

10
0 1 0 0 0 0 0 0 0 0
1 0 1 0 0 0 0 0 0 0
0 1 0 1 0 0 0 0 0 0
0 0 1 0 1 0 0 0 0 0
0 0 0 1 0 1 0 0 0 0
0 0 0 0 1 0 1 0 0 0
0 0 0 0 0 1 0 1 0 0
0 0 0 0 0 0 1 0 1 0
0 0 0 0 0 0 0 1 0 1
0 0 0 0 0 0 0 0 1 0
3.67

20
0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1.90

*/

