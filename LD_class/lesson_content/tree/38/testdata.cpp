#include "/home/josh/codes/head/random_root_tree.h"

using namespace std;

inline void test(){
    make_tree(10,"t1.in");
}

inline void testdatas(int n,int m,string s){
    ofstream f(s,ios::trunc);
    ifstream F("temp");
    f<<n<<" "<<m<<'\n';
    for(int i=0;i<m;++i){
        f<<n1e5(rd)%n+1<<" ";
    }
    f<<'\n';

    int a,b;F >>a;
    for(int i=1;i<n;++i){
        F>>a>>b;
        f<<a<<" "<<b<<'\n';
    }
}


int main(){
    srand(time(0)); 
//    test();
    string s;
    for(int i=1;i<=10;++i){
        int n=99000+n1e3(rd),m=n1e5(rd);
        if(m>n)m=n;
        cout<<i<<'\n';
        s="t"+to_string(i)+".in";

        ofstream f(s,ios::trunc);
        make_tree(n,"temp");
        testdatas(n,m,s);
    }
}