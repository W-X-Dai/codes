#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int main(){
    ifstream conf("./gen/config");
    int n;conf>>n;
    string buildsubtasks="bash ./gen/subtasks/buildsubtasks.sh "+to_string(n);
    system(buildsubtasks.c_str());  

    int x,i=1,j=0,id=1;
    while(conf>>x){
        j+=x;
        string runsubtasks="bash ./gen/subtasks/runsubtasks "+to_string(id)+" "+to_string(i)+" "+to_string(j);
        i=j+1;
        ++id;
    }

    return 0;
    
}