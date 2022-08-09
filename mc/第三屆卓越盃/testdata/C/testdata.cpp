#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;

inline void testdata(int id){
    string sss="C"+to_string(id)+".in",s;
    ofstream f(sss,ios::trunc);
    
    int n=rnd.next(90,100);
    if(n & 1)++n;

    int lcnt=0,rcnt=0;
    for(int i=0;i<n;++i){
        if(lcnt==rcnt)s+="(",++lcnt;
        else if(lcnt==(n>>1))s+=")",++rcnt;
        else{
            if(rnd.next(0,1)){
                s+="(";
                ++lcnt;
            }else{
                s+=")";
                ++rcnt;
            }
        }
    }
    for(int i=0;i<rnd.next(7,11);++i){
        int x=rnd.next(1,n);
        char tmp=(id & 2 ? rnd.next(33,39) : rnd.next(42,47));
        s[x]=tmp;//cerr<<x<<" "<<tmp<<'\n';   
    }
    f<<s<<'\n';  
}

inline void testdata_20(){
    
    ofstream f("C20.in",ios::trunc);
    
    int n=1e5;
    string s;

    for(int i=0;i<50000;++i)s+="(";
    for(int i=0;i<50000;++i){
        char tmp=(i & 2 ? rnd.next(33,39) : rnd.next(42,47));
        s+=tmp;
    }

    f<<s<<'\n';     
}

int main(){
    for(int i=10;i<=14;++i){
        cerr<<i<<'\n';
        testdata(i);
    }
//    testdata_20();
}