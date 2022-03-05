#include<iostream>
using namespace std;
int main(){
    int n,m,i;
    int sum;
    
    while(cin >>n>>m){
        sum=n;i=1;
        while(sum<=m){
            sum+=n+1;
            n++;
            i++;
        }
		cout<<i<<endl;
    }
    
    return 0;
}
