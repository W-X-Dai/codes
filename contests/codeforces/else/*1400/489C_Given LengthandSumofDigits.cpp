#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int m,s;
int arr[105];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>m>>s;
    
    if(m>s){
        cout<<"-1 -1\n";
        return 0;
    }

    vector<int> v;

    s--;
    while(s>9){
        v.eb(9);
        s-=9;
    }

}