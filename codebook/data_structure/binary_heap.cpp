#include<bits/stdc++.h>
using namespace std;

int arr[5000],e;

void insert(int x){
    e++;
    arr[e]=x;
    int tmp=e;
    
    while(tmp>1 && arr[tmp]>arr[tmp/2]){
        swap(arr[tmp],arr[tmp/2]);
        tmp/=2;
    }
}

void pop(){
    swap(arr[1],arr[e]);
    int tmp=1;

    while(tmp<=e && max(arr[tmp*2],arr[tmp*2+1])>arr[tmp]){
        if(arr[tmp*2]>arr[tmp*2+1]){
            swap(arr[tmp],arr[tmp*2]);
            tmp*=2;
        }
        else {    
            swap(arr[tmp],arr[tmp*2+1]);
            tmp*=2,tmp++;
        }
    }


}

int main(){
    int n,x;

    e=0;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >>x;
        insert(x);
    }
    pop();
    cout<<arr[1]<<'\n';

}