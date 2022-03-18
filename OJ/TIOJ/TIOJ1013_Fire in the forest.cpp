#include <bits/stdc++.h>
using namespace std;

int x,y,a,b,t;
int arr[10][17];
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};
queue<int> q,qp;
vector<string> mp={
    "*****************",
    "*...*.......**..*",
    "**..*....*.*.*..*",
    "*......*.**.**.**",
    "*..**...**..**.**",
    "**.....**..*.*..*",
    "*....*..........*",
    "*.....****.*...**",
    "****.*.*........*",
    "*****************",
};

inline void show(){
    for(int i=0;i<10;++i){
        for(int j=0;j<17;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }
}

inline void init(){
    for(int i=0,k=0;i<10;++i){
        for(int j=0;j<17;++j){
            if(mp[i][j]=='*')arr[i][j]=1;
            else arr[i][j]=0;
        }
    }
}

inline void fbfs(){
    int x,y;
    for(int i=0;i<t;++i){
        int l=q.size()/2;
        for(int i=0;i<l && !q.empty();++i){
            x=q.front(),q.pop();
            y=q.front(),q.pop();
        //    cout<<x<<"+"<<y<<'\n';
            for(int i=0;i<4;++i){
                if(arr[x+dx[i]][y+dy[i]]==0){
                    q.push(x+dx[i]),q.push(y+dy[i]);
                    arr[x+dx[i]][y+dy[i]]=1;
                }
            }
        }
    }
}

inline void pbfs(){
    int x,y,t=0;
    while(!q.empty() && !qp.empty()){
        ++t;
        int l=qp.size()/2;
        for(int i=0;i<l;++i){
            x=qp.front(),qp.pop();
            y=qp.front(),qp.pop();
            for(int i=0;i<4;++i){
                if(x+dx[i]==a && y+dy[i]==b){
                    cout<<t<<'\n';
                    return;
                }
                if(arr[x+dx[i]][y+dy[i]]!=1){
                    qp.push(x+dx[i]),qp.push(y+dy[i]);
                }
            }            
        }
        l=q.size()/2;
        for(int i=0;i<l;++i){
            x=q.front(),q.pop();
            y=q.front(),q.pop();
            for(int i=0;i<4;++i){
                if(arr[x+dx[i]][y+dy[i]]==0){
                    q.push(x+dx[i]),q.push(y+dy[i]);
                    arr[x+dx[i]][y+dy[i]]=1;
                }
            }             
        }
       
    }
    cout<<"Help!\n";
}

int main(){
    init();
    cin >>x>>y>>t;
    q.push(x),q.push(y);

    cin >>x>>y>>a>>b;
    if(arr[x][y]==1){
        cout<<"Help!\n";
        return 0;
    }
    qp.push(x),qp.push(y);
    arr[a][b]=-1;

    fbfs();
    pbfs();

}