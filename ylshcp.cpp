#include<bits/stdc++.h>
using namespace std;

int main(){
    //username password first_name last_name
    string usr[33],psw[33],fn[33],ln[33];

    ifstream fin("ylshcp.csv");
    for(int i=0;i<33;++i){
        string s;
        fin >>s>>fn[i]>>usr[i]>>psw[i];
        ln[i]=i+1;
    }
    ofstream fout("contest.yaml");
    for(int i=0;i<33;++i){
        fout<<"  - username: \""<<usr[i]<<"\"\n";
        fout<<"    password: \""<<psw[i]<<"\"\n";
        fout<<"    first_name: \""<<fn[i]<<"\"\n";
        fout<<"    last_name: \""<<i+1<<"\"\n";
    }
}