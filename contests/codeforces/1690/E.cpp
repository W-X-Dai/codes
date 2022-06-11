#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define m_p make_pair
#define ff first
#define ss second
#define eb emplace_back

using namespace std;

const int N=2e5+5;
int n,k,cnt,arr[N],use[N];
pii pro[N];

inline void sol(){
    cnt=0;
    fill(use,use+N,0);
    cin >>n>>k;
    for(int i=0;i<n;++i)cin >>arr[i];
    for(int i=0;i<n;++i){
        pro[i].ff=arr[i]%k;
        pro[i].ss=arr[i];
    }
    sort(pro,pro+n);
    int temp[N];
    for(int i=0;i<n;++i)temp[i]=pro[i].ff;
//    for(int i=0;i<n;++i)cout<<pro[i].ff<<" ";cout<<'\n';
//    for(int i=0;i<n;++i)cout<<pro[i].ss<<" ";cout<<'\n';
    
    for(int i=0;i<n;++i){
        if(use[i])continue;use[i]=1;
        int tar=lower_bound(temp,temp+n,k-temp[i])-temp;
        if(tar==n){
            for(int j=i+1;;++j){
                if(use[j]==0){
                //    cout<<i<<" "<<j<<'\n';                    
                    cnt+=(pro[i].ss+pro[j].ss)/k;
                    use[j]=1;
                    break;
                }
            }
        }else{
            for(int j=tar;;++j){
               if(use[j]==0){
                //    cout<<i<<" "<<j<<'\n';
                    cnt+=(int)(pro[i].ss+pro[j].ss)/k;
                    use[j]=1;
                    break;
               } 
            }
        }
    }
    cout<<cnt<<'\n';

}

int main(){
//    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();

}
