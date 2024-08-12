#include<bits/stdc++.h>
using namespace std;


int main(int argc, char* argv[]) {
    cout<<"8\n\n";
    int xx=stoi(argv[1])+1,y;
    int x=xx;
    for(y=2;y<=7;++y){
        for(int i=1;i<=8;++i){
            for(int j=1;j<=8;++j){
                if((i-j)==(x-y) || i+j==x+y)cout<<"#";
                else cout<<".";
            }
            cout<<'\n';
        }
        cout<<'\n';
    }

    return 0;
}


