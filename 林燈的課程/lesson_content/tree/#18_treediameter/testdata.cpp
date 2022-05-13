#include "/home/josh/codes/head/assign_root_tree.h"

using namespace std;


int main(){
    srand(time(0)); 
    string s;
    for(int i=1;i<=10;++i){
        cout<<i<<'\n';
        s="t"+to_string(i)+".in";
        make_tree(100000,s,1);
    }
}