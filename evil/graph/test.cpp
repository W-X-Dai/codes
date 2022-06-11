#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
#define N 100005
using namespace std;
int n,m;
int in[N];//節點入度
int path[N];//儲存路徑
vector<int> G[N];//G[i]表示i節點所指向的所有其他點
void Topsort()//拓撲排序
{
    priority_queue< int,vector<int>,greater<int> > Q;//最小值先出列
    int cnt=0;//記錄可拆解的點數目
    for(int i=1;i<=n;i++)//列舉編號從1到n的點
        if(in[i]==0)//入度為0，入列
            Q.push(i);
 
    while(!Q.empty()) {
        int x=Q.top();//佇列首元素
        Q.pop();
 
        path[++cnt]=x;//儲存可拆點
        for(int i=0;i<G[x].size();i++){
            int y=G[x][i];
            in[y]--;//入度減一
 
            if(in[y]==0)//入度為0，出列
                Q.push(y);
        }
    }
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF&&n)
    {
        memset(in,0,sizeof(in));
        for(int i=0;i<n;i++)
            G[i].clear();
        for(int i=0;i<m;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            G[x].push_back(y);
            in[y]++;
        }
 
        Topsort();
        for(int i=0;i<n;i++)
            printf("%d ",path[i]);
        printf("\n");
    }
    return 0;
}
/*
6 7
5 6
1 6
1 3
6 4
3 4
6 3
5 2
*/