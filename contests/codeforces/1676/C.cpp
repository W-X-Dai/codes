#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int N=55;

string s[N];
int ans,n,m;

inline void dif(int num){
    int temp=0;
    for(int i=0;i<n;++i){
        temp=0;
        if(i==num)continue;
        else{ 
            for(int j=0;j<m;++j){
                temp+=abs(s[num][j]-s[i][j]);
            }
            ans=min(ans,temp);
        }
    }
}

inline void sol(){
    ans=0x3f3f3f3f;
    cin >>n>>m;
    for(int i=0;i<n;++i)cin >>s[i];
    for(int i=0;i<n;++i)dif(i);
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}
