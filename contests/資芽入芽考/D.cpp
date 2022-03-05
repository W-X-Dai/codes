#include<bits/stdc++.h>
#define pii pair<int,int>
#define mp make_pair
using namespace std;

int h,n,m,k;
int t,s,e;
int arr[1000005];

void find(){
    ios::sync_with_stdio(0),cin.tie(0);
    /*cout<<s<<"ele";
    for(int i=1;i<=h;++i){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';*/
    int el,d;//elevator distance
    for(int i=s;i<=h;++i){
        if(arr[i]!=0){
            el=i;
            d=i-s;
            break;
        }
    }
    for(int i=s;i>=1;--i){
        if(arr[i]!=0){
            if(abs(s-i)<=abs(d)){
                el=i;
                break;
            }
        }
    }
    cout<<arr[el]<<'\n';
    arr[e]=arr[el];
    arr[el]=0;
}

int main(){
    cin >>h>>n>>m>>k;
    for(int i=1;i<=n;++i){
        int x;cin >>x;
        arr[x]=i;
    }
    for(int i=0;i<k;++i){
        cin >>t>>s>>e;
        find();
    }
}