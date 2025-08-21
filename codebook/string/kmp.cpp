#include<bits/stdc++.h>
using namespace std;

const int N=1e6+5;

string s, t;
int arr[N];

int main(){
    cin >>s>>t;

    arr[0]=-1;
    for(int i=1;i<s.size();++i){
        int j=arr[i-1];
        while(j!=-1 and s[j]!=s[i])
            j=arr[j];
    }
}