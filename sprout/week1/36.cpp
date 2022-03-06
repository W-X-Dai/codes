#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> v;
    int mode,n,x;

    cin >>n;
    for(int i=0;i<n;++i){
        cin >>mode;
        if(mode==1)cin >>x,v.push(x);
        if(mode==2){
            if(v.empty())cout<<"empty!\n";
            else cout<<v.top(),v.pop();
        }
    }
}