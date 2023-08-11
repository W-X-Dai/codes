#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("./score");
    string group_mem[7][8],mem[43];
    int g_score[6]={0},score[43];

    random_device rd;
    mt19937 rng(rd());

    int num[43],x;
    for(int i=1;i<=42;++i)num[i]=i,fin>>mem[i]>>score[i];

    for(int i=0;i<7;++i){
        shuffle(num+1+6*i,num+6+1+6*i,rng);
    }

    int id=1;
    for(int g=1;g<=6;++g){
        for(int m=1;m<=7;++m){
            group_mem[g][m]=mem[num[g+(m-1)*6]];
            g_score[g]+=score[num[g+(m-1)*6]];
            ++id;
        }
    }

    for(int g=1;g<=6;++g){
        cout<<"Group_"<<g<<" ";
        for(int m=1;m<=7;++m){
            cout<<group_mem[g][m]<<" ";
        }
        cout<<g_score[g]<<'\n';
    }

}