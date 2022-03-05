#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans;
    string s1,s2;

    cin >>n;
    while(n--){
        ans=0;
        cin >>s1>>s2;
        map<char,int> mp;
        int l=s1.size();

        for(int i=0;i<l;++i){
            mp[s1[i]]=i;
        }
        l=s2.size();
        for(int i=1;i<l;++i){
            ans+=abs(mp[s2[i]]-mp[s2[i-1]]);
        }
        cout<<ans<<'\n';

    }

}