#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define x first
#define y second
using namespace std;

map<pii,bool> mp;
map<pii,bool> vis;


pii arr[2505];
int n,r;



inline bool det(int n){
    int cnt=0,x=arr[n].x,y=arr[n].y;
    for(int i=x-10;i<=x+10;++i){
        for(int j=y-10;j<=y+10;++j){
        //    if(mp[x,y])++cnt;
        }
    }
    return (cnt & 1);
}


int main(){
    cin >>n>>r;
    for(int i=0;i<n;++i){
        cin >>arr[i].x>>arr[i].y;
    //    mpx[arr[i].x]=true;
    //    mpy[arr[i].y]=true;
    }
    

}