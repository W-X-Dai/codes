#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("data", ios::in);
    ofstream fout;
    if(!fin.is_open())cout<<"error";

    double data[640][8];

    for(int i=0;i<640;++i){
        for(int j=0;j<8;++j){
            fin >>data[i][j];
        }
    }

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 5);    

    for(int i=0;i<20;++i){
        string s="./testdatas/data_"+to_string(i);
        fout.open(s);
        for(int j=0;j<640;++j){
            if(dist(gen)==1){
                for(int k=0;k<8;++k){
                    fout<<data[j][k]<<" \n"[k==7];
                }
            }
        }
        fout.close();
    }
}