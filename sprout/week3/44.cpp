#include<bits/stdc++.h>
using namespace std;

int mp[105][105],cnt,h,w,cx,cy;
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
char x;

inline void show(){
    for(int i=1;i<=h;++i){
        for(int j=1;j<=w;++j){
            cout<<mp[i][j];
        }
        cout<<'\n';
    }
}

inline void bfs(int x,int y){
    mp[x][y]=0;
    for(int i=0;i<4;++i){
        int tx=dir[i][0]+x,ty=dir[i][1]+y;
    //    show();
    //    cout<<tx<<" "<<ty<<" "<<cnt<<'\n';
        if(mp[tx][ty]==1)bfs(tx,ty);
    }
}



inline void sol(){
    ios::sync_with_stdio(0),cin.tie(0);
    cnt=-1;

    cin >>h>>w;
    for(int i=1;i<=h;++i){
        for(int j=1;j<=w;++j){
            cin >>x;
            if(x=='.')mp[i][j]=1;
            else if(x=='K')cx=i,cy=j;
            else if(x=='@')mp[i][j]=2;
            else mp[i][j]=0;
        }
    }
    bfs(cx,cy);
    if(cnt==-1)cout<<"= =\""<<'\n';
    else cout<<cnt<<'\n';
    
}

int main(){
    int t;cin >>t;
    while(t--)sol();
}