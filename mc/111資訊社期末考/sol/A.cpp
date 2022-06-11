#include<iostream>
using namespace std;

int main(){
    int n,a,b;

    cin >>n;
    for(int i=0;i<n;++i){
        cin >>a>>b;
        int tmp=a%b;
        if(tmp*2>=b)cout<<a/b+1<<'\n';
        else cout<<a/b<<'\n';
    }
}
