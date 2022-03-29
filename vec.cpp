#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;


vector<int> v[1000];
int n,m,a,b,arr[1000],rt[1000],root;

int dfs(int root){
    if(v[root].empty()){
        return 1;
    }

    
}

int main(){
    cin >>n>>m;
    for(int i=0;i<n;++i){
        cin >>a>>b;
        v[a].eb(b);
        rt[b]=1;
    }
    for(int i=0;i<n;++i){
        if(!rt[i]){
            root=rt[i];
            break;
        }
    }
    dfs(root);

}