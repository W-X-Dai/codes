#include<bits/stdc++.h>
#define ll long long
#define eb emplace_back

using namespace std;

int x[1005],y[1005],n,a,b;
vector<double> arr;

const double eps=1e-10;

inline bool equal(double a ,double b){
    return (b-eps)<a && a<(b+eps);
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>n;
    for(int i=0;i<n;++i){
        cin >>x[i]>>y[i];
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<i;++j){
            if(i==j)continue;
            ll t=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
            arr.eb(sqrt(t));
        }
    }
    sort(arr.begin(),arr.end());

    int cnt=0;
    for(int i=1;i<n;++i){
        if(equal(arr[i],arr[i-1]))++cnt;
    }
    cout<<cnt<<'\n';
}

/*
4
1 1
1 2
2 1
2 2
*/