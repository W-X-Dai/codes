#include<bits/stdc++.h>
using namespace std;

int main() {
    int t1,t2,f1,f2;
    cin >>f1>>t1>>f2>>t2;

    if(t2<t1)swap(t1,t2),swap(f1,f2);

//    if(t1==t2)cout<<max(f1,f2)-1<<'\n';

    int elevator=1,move=0;
    elevator=min(f1,1+t2-t1);//t2時電梯的位置
    move+=elevator-1;

    if(elevator==f1)move+=abs(elevator-f2);
    else{
        if(abs(f1-elevator)>abs(f2-elevator))move+=abs(f2-elevator)+abs(f1-f2);
        else move+=abs(f1-elevator)+abs(f1-f2);

    }

    cout<<move<<'\n';

}