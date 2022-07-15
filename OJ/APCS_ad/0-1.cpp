#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n,d,x,tot=0,cnt=0;

    cin >>n>>d;
    for(int i=0;i<n;++i){
        int ma=-1,mi=101,ave=0;
        for(int j=0;j<3;++j){
            cin >>x;
            ave+=x;ma=max(ma,x),mi=min(mi,x);
            ave/=3;
        }
        cout<<ma<<" "<<mi<<'\n';
        if(ma-mi>=d){
            cout<<tot<<'\n';
            ++cnt;
            tot+=ave;
        }
    }
    cout<<cnt<<" "<<tot<<'\n';
}
