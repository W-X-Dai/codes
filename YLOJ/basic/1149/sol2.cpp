    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int n,m,arr[1005];

        cin >>n;
        for(int i=0;i<n;++i){
            cin >>arr[i];
        }
        cin >>m;

        int t=0;
        for(int i=0;i<n;++i)t+=!(arr[i]-m);
        //cout<<t<<'\n';
        int x=pow(2,t);
        x%=10;
        //cout<<x<<'\n';
        int ans=1;
        for(int i=0;i<x;++i){
            ans*=10;
        }
        cout<<ans<<'\n';

        return 0;

    }