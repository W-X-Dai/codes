#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define m_p make_pair
#define ff first
#define ss second
#define eb emplace_back

using namespace std;

int main(){
    int l,n,tmp,ans=0;

    cin >>l>>n;
    for(int i=0;i<n;++i){
        cin >>tmp;
        tmp=max(tmp,l-tmp);
        ans=max(tmp,ans);
    }
    cout<<ans<<'\n';

}
