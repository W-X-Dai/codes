#include<bits/stdc++.h>
using namespace std;

inline bool win(char a[3][3], char c){
    // rows and columns
    for(int i=0;i<3;++i){
        if(a[i][0]==c && a[i][1]==c && a[i][2]==c)return true;
        if(a[0][i]==c && a[1][i]==c && a[2][i]==c)return true;
    }
    // diagonals
    if(a[0][0]==c && a[1][1]==c && a[2][2]==c)return true;
    if(a[0][2]==c && a[1][1]==c && a[2][0]==c)return true;
    return false;
}

inline void sol(){
    char a[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >>a[i][j];

    int cntX=0, cntO=0, cntD=0;
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            if(a[i][j]=='X')cntX++;
            else if(a[i][j]=='O')cntO++;
            else cntD++;
        }
    }

    // check number validity
    if(abs(cntX-cntO)>1){
        cout <<"Invalid\n";
        return;
    }

    bool Xwin=win(a,'X'), Owin=win(a,'O');
    // check win validity
    if(Xwin && Owin){
        cout <<"Invalid\n";
        return;
    }

    // check turn validity
    if(Xwin && cntX==cntO-1){
        cout <<"Invalid\n";
        return;
    }
    if(Owin && cntO==cntX-1){
        cout <<"Invalid\n";
        return;
    }

    // final status
    if(Xwin){
        cout<<"X wins\n";
    }else if(Owin){
        cout<<"O wins\n";
    }else{
        if(cntD==0)cout<<"Draw\n";
        else cout<<"Game not finished\n";
    }
    return;
}

int main(){
    int T;
    cin >>T;
    while(T--)sol();
}