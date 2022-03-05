#include<bits/stdc++.h>
using namespace std;

struct s{
    string name;
    int t;
    int mod;
};
s arr[1005];
bool cmp1(s x,s y){
    if(x.t!=y.t) return x.t<y.t;
    if(x.name!=y.name)return x.name<y.name;
    return x.mod<y.mod;
}


int main(){
    int n,k,num=0;
    vector<string> ans;

    cin >>n>>k;
    for(int i=0;i<n;++i){
        cin >>arr[i].name>>arr[i].t>>arr[i].mod;
    }
    sort(arr,arr+n,cmp1);

    for(int i=0;i<n;++i){
        if(arr[i].mod==0)num++;
        else num--;
        
        if(num>k){
            ans.emplace_back(arr[i].name);
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();++i)
        cout<<ans[i]<<'\n';
}
/*
11 4
ak 11 0
aj 9 0
ai 1 0
ah 6 1
ag 5 0
af 8 0
ae 10 1
ad 2 0
ac 3 0
ab 7 1
aa 4 0

*/