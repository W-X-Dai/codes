#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int n,m,position;
vector<string> pwd,mp;
vector<int> v[22],folder;

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
    vector<string> tmp;
    for(int i:v[position]){
        tmp.eb(mp[i]);
    }
    sort(tmp.begin(),tmp.end());
    for(auto i:tmp)
        if(i[0]!='.')cout<<i<<'\n';
    return;
}

//la
inline void func2(){
    cout<<".\n..\n";
    vector<string> tmp;
    for(int i:v[position]){
        tmp.eb(mp[i]);
    }
    sort(tmp.begin(),tmp.end());
    for(auto i:tmp)
        if(i[0]!='.')cout<<i<<'\n';
    return;    
}

//pwd
inline void func3(){
    if(pwd.empty())cout<<"/\n";
    else{
        for(auto i:pwd)cout<<"/"<<i;
        cout<<'\n';
    }
    return;
}

//cd
inline void func4(){
    string x;cin >>x;
    if(x==".")return;
    if(x==".."){
        if(pwd.empty())return;
        pwd.pop_back();
        position=find(pwd.back());
        return;
    }
    int id=find(x);
    for(int i:v[position]){
        if(i==id){
            pwd.eb(id);
            position=id;
            return;
        }
    }

}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);    
    cin >>n>>m;

    //construct
    for(int i=1;i<n;++i){
        string a,b;
        cin >>a>>b;

        if(b[0]!='*')folder.eb(0);
        else folder.eb(1);

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