#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int N=1e5+5;
ll n,x,arr[N],pre[N];

int main(){
    cin >>n>>x;

    for(int i=1;i<=n;++i){
        cin >>arr[i];
        pre[i]=arr[i]+pre[i-1];
    }
//    for(int i=1;i<=n;++i)cout<<pre[i]<<" ";cout<<'\n';
    for(int i=1;i<=n;++i){
        int tmp=lower_bound(pre+1+i,pre+1+n,x+pre[i-1])-pre;
//        cout<<i<<" "<<tmp<<" "<<pre[tmp]-pre[i-1]<<'\n';
         if(pre[tmp]-pre[i-1]==x){
            cout<<i<<" "<<tmp<<'\n';
            return 0;
        }
    
    }
    
}

/*

6 14
01 04 02 08 05 07
01 05 07 15 20 27

*/