#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int n,m,k,cnt,nowtmp,id;
int arr[2005][2005];
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

vector<int> v;

inline bool det(int x,int y){
    return ((x<=0 || x>n) || (y<=0 || y>m));
}

inline void bfs(int x,int y){
    for(int i=0;i<4;++i){
        int dx=x+dir[i][0];
        int dy=y+dir[i][1];

        if(!det(dx,dy) && arr[dx][dy]==0){
            --cnt,arr[dx][dy]=1;
            v.eb(dx);v.eb(dy);
            ++nowtmp;
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>m>>k;cnt=n*m-k;cout<<cnt;

    for(int i=0;i<k;++i){
        int x,y;cin >>x>>y;
        arr[x][y]=1;
        v.eb(x);
        v.eb(y);
    }

    int now=k;
    while(cnt>0){
        for(int i=0;i<now;++i){
            int x=v[0];v.erase(v.begin());
            int y=v[0];v.erase(v.begin());
            bfs(x,y);            
        }
        cout<<" "<<max(cnt,0);
        now=nowtmp;
        nowtmp=0;
    }

    cout<<'\n';
}