#include<bits/stdc++.h>
#define int long long
#define eb emplace_back
using namespace std;

const int N=1e6+5;

int n,q;
string s;

vector<int> arr;

inline int findmex(){
    if(arr.empty())return 0;
    if(arr[0]>0)return 0;
    else{
        for(int i=0;i<arr.size();++i){
            if(arr[i]!=i)return i;
        }
    }
    return arr[arr.size()-1]+1;
}

int32_t main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>q;
    for(int i=0;i<n;++i)arr.eb(0),cin >>arr[i];
    cin >>s;

    sort(arr.begin(),arr.end());

    int ans,a[N];

    for(int i=0;i<q;++i){
        if(s[i]=='2'){
            a[i]=arr[arr.size()-1];
            arr.pop_back();
            // sort(arr.begin(),arr.end());
            // for(int i:arr)cout<<i<<" ";cout<<'\n';
        }
        if(s[i]=='1'){
            swap(arr[0],arr[arr.size()-1]);
            a[i]=arr[arr.size()-1];
            arr.pop_back();
        }
        if(s[i]=='3'){
            int x=findmex();
            arr.eb(x);
            a[i]=x;
        }
        sort(arr.begin(),arr.end());
    }

    for(int i=0;i<q;i+=10){
        ans=0;
        for(int j=i;j<min(i+10,q);++j){
            // cout<<a[j]<<'\n';4
            ans+=a[j];
        }
        cout<<ans<<" ";
    }
    cout<<'\n';
    return 0;

}