#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e4+5;
int arr[N], c, n, l=0x3f3f3f3f, r;

inline int find_cost(int level){
    int sum=0;
    for(int i=0;i<n;++i){
        sum+=(level-arr[i])*(level-arr[i])*(arr[i]<level);
    }
    return sum;
}

int32_t main(){
    cin >>n>>c;
    for(int i=0;i<n;++i){
        cin >>arr[i];
        l=min(l, arr[i]);
        r=max(r, arr[i]);
    }
    r=sqrt(c+r)+l+1;

    int current_ans=-1;
    while(true){
        int mid=(l+r)/2;
        int tmp=find_cost(mid);
        if(tmp<=c)current_ans=max(current_ans, mid);
        // cout<<l<<" "<<r<<'\n';
        // cout<<tmp<<'\n';

        if(l>=r or tmp==c)break;
        if(tmp<c)l=mid+1;
        if(tmp>c)r=mid;
    }
    cout<<current_ans<<'\n';

}