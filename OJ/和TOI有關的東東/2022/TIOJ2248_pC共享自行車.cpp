#include<bits/stdc++.h>
#define pii pair<int,int>
#define eb emplace_back
#define pt first
#define val second
#define int long long

using namespace std;

const int N=100005;
int w[N],exist[N],cnt,n,k;
pii arr[N];
vector<pii> v[N];

void init(){
    for(int i=1;i<=n;++i)arr[i].second=i;
    sort(arr+1,arr+1+n);
}

inline void sol(){
    cin >>n>>k;
    for(int i=1;i<=n;++i)cin >>w[i];
    for(int i=0;i<n-1;++i){
        int a,b,c;
        cin >>a>>b>>c;

        v[a].eb(make_pair(b,c));
        v[b].eb(make_pair(a,c));
        ++arr[a].first,++arr[b].first;
    }
    init();
    for(int i=1;i<=n;++i){
        int x=arr[i].second,tar;
        exist[x]=1;
        if(w[x]!=k){
            for(int j=0;j<v[x].size();++j){
            //    cout<<exist[v[x][j].pt]<<'\n';
                if(exist[v[x][j].pt]==0){tar=j;break;}
            }
        //    cout<<"tar:"<<tar<<'\n';
            w[v[x][tar].pt]-=(k-w[x]);
            cnt+=v[x][tar].val*abs((k-w[x]));
        }
    //    for(int i=1;i<=n;++i)cout<<w[i]<<" ";
    //    cout<<'\n';
    }
    cout<<cnt<<'\n';
}

signed main(){
    int t;
    cin >>t;
    while(t--)sol();   
}