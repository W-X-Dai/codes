#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

vector<int> v[100],folder;
vector<string> mp,pwd;

int position;

inline int find1(string s){
    for(int i=0;i<mp.size();++i){
        if(mp[i]==s)return i;
    }
    return -1;
}

inline string rename(string s){
    string rt;
    for(int i=1;i<s.size();++i)
        rt+=s[i];
    return rt;
}

//la
inline void func1(){
    vector<string> tmp;
    for(int i:v[position]){
        tmp.eb(mp[i]);
    }
    sort(tmp.begin(),tmp.end());
    cout<<".\n..\n";
    for(auto i:tmp)cout<<i<<'\n';
    return;
}

//ls
inline void func2(){
    vector<string> tmp;
    for(int i:v[position]){
        tmp.eb(mp[i]);
    }
    sort(tmp.begin(),tmp.end());
    for(auto i:tmp)if(i[0]!='.')cout<<i<<'\n';
    return;    
}

//cd
inline void func3(string s){
    if(s==".")return;
    int x=find1(s);
    if(s=="/"){
        cout<<"bash: cd: "<<s<<": No such file or directory\n";
        return;
    }
    for(auto i:pwd){
        if(i==s){
            cout<<"bash: cd: "<<s<<": No such file or directory\n";
            return;    
        }
    }
    if(x==-1 && s!=".." && s!=".")cout<<"bash: cd: "<<s<<": No such file or directory\n";
    else if(!folder[x] && s!=".." && s!=".")cout<<"bash: cd: "<<s<<": Not a directory\n";
    else{
        if(s==".."){
            if(pwd.size()==1 || pwd.size()==0){
                pwd.clear();
                position=0;
                return;
            }else{
                pwd.pop_back();
                position=find1(pwd.back());                
            }
        }else {
            pwd.eb(s);
            position=x;
        }
    }
    return;
}

//pwd
inline void func4(){
    if(pwd.empty())cout<<"/";
    else for(auto i:pwd)cout<<"/"<<i;
    cout<<"\n";
    return;
}

int main(){
//    ios::sync_with_stdio(0),cin.tie(0);

    freopen("B9.in","r",stdin);
    freopen("B9.out","w",stdout);

    mp.eb("/");
    folder.eb(1);

    int n,m;
    cin >>n>>m;
    for(int i=1;i<n;++i){
        string s1,s2;
        cin >>s1>>s2;
        int ma=find1(s1);

        if(s2[0]=='*'){
            s2=rename(s2);
            folder.eb(1);
        }else folder.eb(0);
        
        mp.eb(s2);v[ma].eb(mp.size()-1);
    }
    for(int i=0;i<m;++i){
        string s,tmp;
        cin >>s;cerr<<s<<'\n';
        if(s=="cd"){cin >>tmp;func3(tmp);}
        if(s=="la")func1();
        if(s=="ls")func2();
        if(s=="pwd")func4();
    }
}