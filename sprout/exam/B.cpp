#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

vector<int> v;
int n,k,md;
string s;


int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>k>>n;
    for(int i=0;i<n;++i){
        cin >>s;
        if(s=="Add"){
            int x;cin >>x;
            v.eb(x);
        }else if(s=="Remove"){
            int mid=v.size()/2;
            reverse(v.begin()+v.size()/2,v.end());
            v.pop_back();
            reverse(v.begin()+v.size()/2,v.end());
        }else if(s=="Mod"){
            md=1;
        }else if(s=="Reverse"){
            reverse(v.begin(),v.end());
        }
    }
    if(md)for(int i=0;i<v.size();++i)cout<<v[i]%k<<" ";
    else for(int i=0;i<v.size();++i)cout<<v[i]<<" ";
    cout<<'\n';
}