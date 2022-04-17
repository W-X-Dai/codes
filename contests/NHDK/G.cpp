#include<bits/stdc++.h>
#define pii pair<int,int>
#define l first
#define id second
using namespace std;

int cnt;

inline void sol(){
    int l;
    pii len[4];
    string s[4],sans,tans;

    cin >>l;
    for(int i=0;i<4;++i){
        cin >>s[i];
        len[i].id=i;
        len[i].l=s[i].size();
    }
    cin >>sans;
    sort(len,len+4);

//    for(int i=0;i<4;++i)cout<<len[i].l<<" ";
//    cout<<'\n';

    if(len[0].l>=l)tans=s[0];
    else if(len[3].l<l)tans=s[2];
    else if(len[0].l<l && len[1].l>=l)tans=s[len[0].id];
    else if(len[3].l>=l && len[2].l<l)tans=s[len[3].id];
    else {
        if(len[3].l-len[0].l>=l)tans=s[1];
        else tans=s[3];
    }
//    cout<<tans<<" "<<sans<<'\n';
    if(tans==sans)++cnt;
//    cout<<cnt<<'\n';
}


int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n;cin >>n;
    for(int i=0;i<n;++i)sol();
    cout<<cnt<<'\n';
}