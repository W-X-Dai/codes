#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,arr[500],t=1,now;
    string s;

    cin >>n>>k;
    cin >>s;
    for(int i=0;i<n;++i){
        arr[i]=s[i]-'a'+1;
    }
    sort(arr,arr+n);
    for(int i=0;i<n;++i)cout<<arr[i]<<" ";
    cout<<'\n';
    if(n==k)cout<<"-1\n";
    else{
        now=arr[0];
        int ans=0;
        ans+=arr[0];
        for(int i=1;i<n;++i){
            if(arr[i]-now>2){
                ans+=arr[i],++t;
                now=arr[i];
            }
            if(t==k)cout<<ans<<'\n';
            return 0;
        }
        
        cout<<"-1\n";
    }
}