#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long double ans,x[105],y[105];

    cin >>n;
    for(int i=0;i<n;++i)cin >>x[i];
    for(int i=0;i<n;++i)cin >>y[i];

    long double absa=0,absb=0;
    for(int i=0;i<n;++i){
        absa+=x[i]*x[i];
        absb+=y[i]*y[i];
    }
    absa=sqrt(absa);
    absb=sqrt(absb);

    long double adotb=0;
    for(int i=0;i<n;++i){
        adotb+=x[i]*y[i];
    }

    adotb*=100;
    ans=adotb/(absa*absb);
    
    ans=round(ans);

    int t=ans;
    string s=to_string(t);
    int l=s.size();

    
    if(l<3)cout<<0;

    for(int i=0;i<l-2;+i)cout<<s[i];
    cout<<".";
    if(l<1)cout<<0;
    if(l<2)cout<<0;
    for(int i=l-2;i<l;++i)cout<<s[i];
    cout<<'\n';


}