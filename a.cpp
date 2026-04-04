#include<bits/stdc++.h>
using namespace std;

int n, mp[12][12], record[12][12], n_blank;
int dir[8][2]={{-1, 0}, {1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, -1}, {-1, 1}};

random_device rd;
mt19937 g(rd()); 

//Generate random integer in [1, 5]
uniform_int_distribution<int> rand_int(1, 5);

inline void gen_map(){
    n_blank=n*n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(rand_int(g)==1)mp[i][j]=9, n_blank--;
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(mp[i][j]==9)continue;
            for(int k=0;k<8;++k){
                if(mp[i+dir[k][0]][j+dir[k][1]]==9)++mp[i][j];
            }
        }
    }
}

inline void show_map(){
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cout<<mp[i][j]<<" ";
        }
        cout<<'\n';
    }
}

inline void game_board(){
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(record[i][j]==1)cout<<mp[i][j]<<"\t";
            else cout<<"["<<i<<" "<<j<<"]\t";
        }
        cout<<'\n';
    }
}

inline bool initialization(){
    cout<<"Please enter the size of the map.\n>>>";
    cin >>n;
    if(n<5 || n>10){
        cout<<"The input must in the range of [5, 10]\n";
        return 0; //invalid
    }
    return 1;
}

int main(){
    while(!initialization());
    gen_map();
    show_map();
    int x, y;
    game_board();
    while(cin >>x>>y){
        if(x<1 or x>n or y<1 or y>n){
            cout<<"Invalid input, please input again\n";
            continue;
        }
        record[x][y]=1;
        game_board();
        if(mp[x][y]==9){
            cout<<"YOU LOSE!\n";
            break;
        }
        n_blank--;
        if(n_blank==0){
            cout<<"YOU WIN!\n";
            break;
        }
    }
    
}