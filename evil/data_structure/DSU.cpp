#include<bits/stdc++.h>
using namespace std;

int fa[100005],n;

inline void init(){
    for(int i=1;i<=n;++i)fa[i]=i;
}

inline int find(int x){
    if(fa[x]==x) return x;
    else {
        fa[x]=find(fa[x]);
        return fa[x];
    }
}

inline void Union(int a,int b){
    a=find(a);
    b=find(b);
    fa[a]=b;
}

int main(){

}
