#include<bits/stdc++.h>
using namespace std;
int n,friends[500000+10],ans=0;
bool been[500000+10]={};
void dfs(int id){
    if(been[friends[id]])return;
    else{
        been[friends[id]]=1;
        dfs(friends[id]);
        return;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)cin>>friends[i];
    for(int i=0;i<n;i++){
        if(been[i]==0){
            ans++;
            been[i]=1;
            dfs(i);
        }
    }
    cout<<ans;
}
