#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    int l=s.size();
    for(int i=0;i<l;++i){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
}