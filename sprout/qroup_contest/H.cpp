#include<bits/stdc++.h>
using namespace std;

string s[3];

inline void sol(){
    int o=0,x=0;
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            if(s[i][j]=='X')++x;
            if(s[i][j]=='O')++o;
        }
    }
    if(abs(x-o)>1){
        cout<<"Cheating!\n";
        return;
    }
    for(int i=0;i<3;++i){
        if(s[i][1]==s[i][2] && s[i][0]==s[i][1] && s[i][0]!='.'){
            cout<<s[i][1]<<" win\n";
            return;
        }
    }

    for(int i=0;i<3;++i){
        if(s[1][i]==s[2][i] && s[0][i]==s[1][i] && s[0][i]!='.'){
            cout<<s[1][i]<<" win\n";
            return;
        }
    }

    if(s[0][0]==s[1][1] && s[1][1]==s[2][2] && s[1][1]!='.'){
        cout<<s[0][0]<<" win\n";
    }
    if(s[0][2]==s[1][1] && s[1][1]==s[2][0] && s[1][1]!='.'){
        cout<<s[1][1]<<" win\n";
    }

    if(x+o==9)cout<<"Tie\n";
    else cout<<"Not yet\n";
    return;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    while(cin >>s[0]>>s[1]>>s[2])sol();
}
