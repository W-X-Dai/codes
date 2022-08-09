#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int n,m,position;
vector<string> pwd,mp;
vector<int> v[22];

inline int find(string s){
    for(int i=0;i<mp.size();++i){
        if(mp[i]==s)return i;
    }
    return -1;
}

string rename(string s){
    string rt=s;
    if(s[0]=='*')for(int i=1;i<s.size();++i)rt[i-1]=s[i];
    return rt;
}

//ls
inline void func1(){
    vector<string>tmp;

}

//la
inline void func2();

//pwd
inline void func3();

//cd
inline void func4();

int main(){
    ios::sync_with_stdio(0),cin.tie(0);    
    cin >>n>>m;

    //construct
    for(int i=1;i<n;++i){
        string a,b;
        cin >>a>>b;
        b=rename(b);
        if(!find(a))mp.eb(a);
        if(!find(b))mp.eb(b);
        int id_a=find(a),id_b=find(b);
        v[id_a].eb(id_b);
    }

    for(int i=0;i<m;++i){
        string s;cin >>s;
        if(s=="ls" )func1();
        if(s=="la" )func2();
        if(s=="pwd")func3();
        if(s=="cd" )func4();
    }
}