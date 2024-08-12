#include<bits/stdc++.h>
using namespace std;

int main(){
    int t1,t2,f1,f2;
    cin >>f1>>t1>>f2>>t2;

    if(t1>t2)swap(t1,t2),swap(f1,f2);
    
    int pos=1,move=0;
    pos=min(f1,1+t2-t1);
    move+=pos-1;

    if(pos==f1)move+=abs(pos-f2);
    else{
        if(abs(f1-pos)>abs(f2-pos))move+=abs(f2-pos)+abs(f1-f2);
        else move+=abs(f1-pos)+abs(f1-f2);
    }
    cout<<move<<'\n';
    /*
    t=t1 電梯啟動前往f1
    t=t2 判斷要去哪層樓
    */

}
