#include <bits/stdc++.h>
using namespace std;

int n,k;
int P[50005];
 
bool cov(int d){
    int coverage=P[0]+d;
    int cnt=1;
    for(int i=1;i<n;i++){
        while(P[i]>coverage){
            coverage=P[i]+d;
            cnt++;
        }
    }
    return cnt<=k;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
     
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>P[i];
    }
    sort(P,P+n);
     
    int l=0;
    int r=(P[n-1]-P[0])/k+1;
    int mn=2e9;
    while(l<r){
        int mid=(l+r)/2;
        if (cov(mid)){
            mn=mid;
            r=mid;
        }else{
            l=mid+1;
        }
    }
    cout<<mn<< '\n';
     
    return 0;
}
