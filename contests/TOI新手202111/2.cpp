#include<bits/stdc++.h>
#define eb emplace_back

using namespace std;
int main(){
    int arr[305],m,n,l;
    vector<int> tmp;

    cin >>n>>m;
    for(int i=1;i<=n;++i){
        cin >>arr[i];
    }

    l=n/2;
    for(int i=0;i<m;++i){
        while(!tmp.empty())tmp.pop_back();
        for(int j=1;j<=l;++j){
            tmp.eb(arr[j]);
            tmp.eb(arr[j+l]);
        }
        for(int j=1;j<n;++j){
            arr[j]=tmp[j-1];
        }
    }

    for(int i=1;i<=n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}