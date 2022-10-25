#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int main(){
    ifstream conf("config");
    int n;conf>>n;

    vector<int> v;
    for(int i=0;i<n;++i){
        int x;conf >>x;
        v.eb(x);
    }
    string s="echo 'hello'";
    auto snew=s.c_str();
    system(snew);
}