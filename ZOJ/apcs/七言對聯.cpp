#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,a1[8],a2[8];
    
    cin >>n;
    while(n--){
        int suc=1;
        for(int i=1;i<=7;++i)cin >>a1[i];
        for(int i=1;i<=7;++i)cin >>a2[i];

        if(a1[2]==a1[4] || a1[2]!=a1[6] || a2[2]==a2[4] || a2[2]!=a2[6])
            suc=0,cout<<'A';
        if(a1[7]==0 || a2[7]==1)
            suc=0,cout<<'B';
        for(int i=2;i<=6;i+=2){
            if(a1[i]==a2[i]){
                cout<<'C';
                suc=0;break;
            }
        }
        if(suc==1)cout<<"None";
        cout<<'\n';
    }
}