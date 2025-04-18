#include<bits/stdc++.h>
using namespace std;

vector<int> v[200005];
int n, max_depth, pt_a, visa[200005], visb[200005];

#define eb emplace_back

void dfs1(int id, int depth){
    visa[id]=1;
    if(v[id].size()==1 and visa[v[id][0]]){
        if(depth>max_depth){
            pt_a=id;
            max_depth=depth;
        }
        return;
    }
    for(auto i:v[id]){
        if(!visa[i])dfs1(i, depth+1);
    }
}

void dfs2(int id, int depth){
    visb[id]=1;
    if(v[id].size()==1 and visb[v[id][0]]){
        if(depth>max_depth){
            max_depth=depth;
        }
        return;
    }
    for(auto i:v[id]){
        if(!visb[i])dfs2(i, depth+1);
    }
}

int main(){
    cin >>n;
    for(int i=0;i<n-1;++i){
        int a, b;
        cin >>a>>b;
        v[a].eb(b),v[b].eb(a);
    }
    dfs1(1, 0);
    max_depth=0;
    dfs2(pt_a, 0);
    cout<<max_depth;
}