#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

string name[105],tmp;
vector<int> up,down;
queue<int> same;
int pos[105];


int main(){
    int n;
    
    cin >>n;
    for(int i=0;i<n;++i){
        cin >>name[i]>>tmp;
        if(tmp[0]=='U')down.eb(i);
        if(tmp[0]=='S')same.push(i),pos[i]=1;
        if(tmp[0]=='D')up.eb(i);
    }
    int k=0;

    for(int k=0;k<n;++k){
        cout<<name[k]<<'\n';
        cout<<name[k]<<'\n';
    }
    
    
    
    
}