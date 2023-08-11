#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int main(){
    system("rm -rf exec");
    system("rm -rf testdatas");

    system("mkdir exec");
    system("mkdir testdatas");

    ifstream conf("./gen.conf");
    int n;conf>>n;
    string buildsubtasks="bash ./scripts/buildsubtasks.sh "+to_string(n);
    system(buildsubtasks.c_str());  

    int x,i=1,j=0,id=1;
    while(conf>>x){
        j+=x;
        string runsubtasks="bash ./scripts/runsubtasks.sh "+to_string(id)+" "+to_string(i)+" "+to_string(j);
        system(runsubtasks.c_str());
        i=j+1;
        ++id;
    }
    string ans="bash ./scripts/ans.sh "+to_string(j);
    system(ans.c_str());
    return 0;
    
}