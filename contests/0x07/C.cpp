#include<bits/stdc++.h>
using namespace std;

const int N=1e6+5;


int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    
    int ans[12],n=0;
    string s[105];
    
    for(ans[0]=0;ans[0]<=9;++ans[0])
    for(ans[1]=0;ans[1]<=9;++ans[1])
    for(ans[2]=0;ans[2]<=9;++ans[2])
    for(ans[3]=0;ans[3]<=9;++ans[3])
    for(ans[4]=0;ans[4]<=9;++ans[4])
    for(ans[5]=0;ans[5]<=9;++ans[5])
    for(ans[6]=0;ans[6]<=9;++ans[6])
    for(ans[7]=0;ans[7]<=9;++ans[7])
    {
        if(ans[0]*ans[4]+ans[1]*ans[6]==10*ans[0]+ans[4])
        if(ans[2]*ans[4]+ans[3]*ans[6]==10*ans[2]+ans[6])
        if(ans[0]*ans[5]+ans[1]*ans[7]==10*ans[1]+ans[5])
        if(ans[2]*ans[5]+ans[3]*ans[7]==10*ans[3]+ans[7]){
            for(int i=0;i<8;++i)s[n]+=to_string(ans[i]);
            ++n;
            
        }
    }

    for(int i=0;i<n;++i)cout<<s[i]<<'\n';


}