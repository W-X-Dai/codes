#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,arr[200005];

    cin >>n;
    for(int i=1;i<=n;++i)cin >>arr[i];

    cin >>t;
    for(int i=0;i<t;++i){
        int a,b;cin >>a>>b;
        if(abs(a-b)>8){
            cout<<"I QUIT!\n";
            cout<<arr[1];
            for(int j=2;j<=n;++j){
                cout<<" "<<arr[j];
            }
            cout<<'\n';
            return 0;
        }
        swap(arr[a],arr[b]);
    }
    cout<<"SORTED!\n";
    cout<<arr[1];
    for(int i=2;i<=n;++i)cout<<" "<<arr[i];cout<<'\n';
}