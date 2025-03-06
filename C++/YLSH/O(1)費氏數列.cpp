#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
int main(){
    int arr[50000],n=INF,reg;

    arr[0]=0,arr[1]=1;
    for(int i=2;i<n;++i){
        arr[i]=(arr[i-1]+arr[i-2])%100;
		if(arr[i]==0 && arr[i+1]==1){
            reg=i;
            break;
        }
    }
    
    cout<<"reg:"<<reg<<'\n';
    int x;
    cin >>x;
    cout<<arr[x%reg]<<'\n';

}
