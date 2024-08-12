#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;

int main(int argc , char* argv[]){
    string start="CST",end;
    string timezones[12]={"NUT","HST","AKST","PST","MST","EST","BRT","GMT","ICT","CST","JST","SBT"};
    int y,m,d,hh,mm;
    
    rnd.setSeed(atoi(argv[1]));
    y=rnd.next(800,1050)*2-1;
    m=rnd.next(1,12);
    d=rnd.next(1,25);
    int id=rnd.next(0,11);
    end=timezones[id];   
    mm=rnd.next(1,60);
    hh=rnd.next(1,24);
    id=rnd.next(0,11);
    start=timezones[id];   

    cout<<start<<"/"<<end<<'\n';
    cout<<y<<"/"<<m<<"/"<<d<<" "<<hh<<":"<<mm<<'\n';

    return 0;
}