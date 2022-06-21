#include<bits/stdc++.h>
#include"test.h"
using namespace std;

char path[200];
string spath;
clock_t begi,endt;
int y,m,d,hour,minu,sec;

std::string timeToString(std::chrono::system_clock::time_point &t){
    std::time_t time = std::chrono::system_clock::to_time_t(t);
    std::string time_str = std::ctime(&time);
    time_str.resize(time_str.size() - 1);
    return time_str;
}


inline void execuse(int n,int t){
    string s="0_0000.in";
    char data[10];
    for(int i=0;i<10;++i)data[i]=s[i];
    data[0]=n+'0';
    begi=clock();
    if(t<10)data[5]=t+'0';
    else data[4]='1';
	for(int i=0;i<1000000;++i);
	freopen(data,"r",stdin);
    freopen("test.out","w",stdout);
    
    sol();
    endt=clock();
}


int main(){
    auto time_p=std::chrono::system_clock::now();
    
    ofstream f("log.txt",ios::trunc);
    
    cerr<<"The project was executed on "<<timeToString(time_p)<<'\n';

    int cnt=0;
    for(int j=1;j<=4;++j)
    for(int i=0;i<=10;++i){
        f<<"testdata #"<<cnt<<" ";++cnt;
    //  excuse(j,i);
	//	double difftime(begi,endt);
        f<<"execute time:"<<(double)(endt-begi)/CLOCKS_PER_SEC<<'\n';
    }
    
}
