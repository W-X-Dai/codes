#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;

inline void subtask1(int id){
    string s1=to_string(id)+".in";
    
    ofstream f1(s1);
    f1<<3<<" "<<rnd.next(1,3)<<'\n';
    f1<<rnd.next(0,3)<<" "<<rnd.next(0,3)<<" "<<rnd.next(0,3)<<'\n';

}

inline void subtask2(int id){
    string s1=to_string(id)+".in";
    string s2=to_string(id)+".out";
    
    ofstream f1(s1);
    int n=rnd.next(70000,100000);
    f1<<n<<" "<<rnd.next(1,n)<<'\n';
    for(int i=0;i<n;++i){
        f1<<rnd.next(1,n)<<" \n"[i==n-1];
    }
}
int k[100005],vis[100005],s,n,cnt;

inline void open(int x){
//    cout<<x<<" "<<k[x]<<'\n';
    if(!x || vis[x])return;
 
    ++cnt,vis[x]=1;
    open(k[x]);
}

inline void init(){
    cnt=0;
    memset(vis,0,sizeof(vis));
}

inline void fillans(int id){
    string s1=to_string(id)+".in";
    string s2=to_string(id)+".out";

    ifstream f1(s1);
    ofstream f2(s2);
    init();

    f1 >>n>>s;
    for(int i=1;i<=n;++i)f1 >>k[i];
    open(s);
    f2<<cnt<<'\n';
    cerr<<n<<'\n';
}

int main(){
    /*
    for(int i=4;i<=6;++i)
        subtask1(i);
    for(int i=7;i<=10;++i)
        subtask2(i);
    */
    for(int i=1;i<=10;++i)
        fillans(i);
}