#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b) {
    if(a.first==b.first){
        return a.second>b.second;
    }else{
        return a.first<b.first;
    }
}

int main(){
	int n,a,b;
    while (cin >>n) {
        vector<pair<int,int>> v;
        for (int i=0;i<n;i++){
            cin >>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end(),cmp);
 
        int s=0,e=0,ans=0;
        for (int i=0; i<v.size();i++){
            if (v[i].first>=e){
                ans+=(e-s);
                s=v[i].first;
                e=v[i].second;
            }else if(v[i].second>e){
                e=v[i].second;
            }
        }
        ans+=(e-s);
        cout<<ans<<endl;
    }
    return 0;
}

