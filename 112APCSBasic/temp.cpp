#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    ifstream fin("trans");
    ofstream fout("output");

    while(fin >>s){
        fout<<"\""<<s<<"\",\n";
    }

}