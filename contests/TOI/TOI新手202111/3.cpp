#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll arr[50],tmp[50],n=1,x,s;

    while(cin >>x){
        if(!x)break;
        arr[n]=x;
        ++n;
    }n--;
    cin >>s;
    while(s--){
        memset(tmp,0,sizeof(tmp));
        if(arr[1]>arr[2]){
            tmp[2]+=arr[1]*10/100;
        }
        if(arr[n]>arr[n-1]){
            tmp[n-1]+=arr[n]*10/100;
        }
        for(int i=2;i<n;++i){
            if(arr[i]>arr[i-1]){
                tmp[i-1]+=arr[i]*5/100;
            }
            if(arr[i]>arr[i+1]){
                tmp[i+1]+=arr[i]*5/100;
            }
        }
        for(int i=1;i<=n;++i){
            arr[i]+=tmp[i];
            tmp[i]=0;
        }
    }
    
    for(int i=1;i<=n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}