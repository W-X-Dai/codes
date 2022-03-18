#include<bits/stdc++.h>
using namespace std;

int n,m,arr[100005],arr1[100005];
int main(){
    set<int> s;

    cin >>n;
    for(int i=0;i<n;++i){
        cin >>arr[i];
        s.insert(arr[i]);
    }
    for(int i=0;!s.empty();++i){
        arr1[i]=*s.begin();
        s.erase(s.begin());
        m=i;
    }
    for(int i=0;i<n;++i){
        cout<<lower_bound(arr1,arr1+m+1,arr[i])-arr1<<" ";
    }
    cout<<'\n';
    
    
}
