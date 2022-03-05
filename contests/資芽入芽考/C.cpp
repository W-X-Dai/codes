#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int n,arr[200005];

int main(){
    cin >>n;
    char x;bool suc=0;
    for(int i=0;i<n;++i){
        cin >>x;
        if(x=='a')arr[i]=1;
        if(x=='b')arr[i]=-1;
        if(x=='?')arr[i]=0;
    }
    for(int i=0;i<n;++i){
        if(arr[i]!=0){
            suc=1;
            for(int j=i-1;j>0;--j){
                if(arr[j]==0)
                    arr[j]=arr[j+1]*-1;
            }
            for(int j=i+1;j<n;++j){
                if(arr[j]==0)
                    arr[j]=arr[j-1]*-1;
            }
            break;
        }
    }
    if(!suc){
        cout<<n-1<<'\n';
    }else{
        int now=arr[0],cnt=0;
        for(int i=1;i<n;++i){
            if(arr[i]!=now){
                now=arr[i];
                ++cnt;
            }
        }
        cout<<cnt<<'\n';
    }

}