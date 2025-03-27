#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("data_origin", ios::in);
    ofstream fout;
    if(!fin.is_open())cout<<"error";

    double data[640][8];
    int arr[640];

    for(int i=0;i<640;++i){
        for(int j=0;j<8;++j){
            fin >>data[i][j];
        }
        arr[i]=i;
    }

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 5);    

    for(int i=0;i<20;++i){
        string s1="./testdatas/test_"+to_string(i);
        string s2="./testdatas/train_"+to_string(i);
        shuffle(arr, arr+640, gen);
        fout.open(s1);
        for(int i=0;i<20;++i){
            for(int j=0;j<8;++j){
                fout <<data[arr[i]][j]<<' ';
            }
            fout <<'\n';
        }
        fout.close();
        fout.open(s2);
        for(int i=20;i<640;++i){
            for(int j=0;j<8;++j){
                fout <<data[arr[i]][j]<<' ';
            }
            fout <<'\n';
        }
        fout.close();
    }
}