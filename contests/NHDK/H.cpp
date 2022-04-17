#include<bits/stdc++.h>
#define eb emplace_back
#define pii pair<int,int>
#define id second
#define score first

using namespace std;

vector<pii> v[8];
int n,x,t,q,arr[200005];

int main(){
    cin >>n;
    for(int i=0;i<n;++i)
    for(int j=0;j<7;++j){
        cin >>x;
        v[j].eb(make_pair(x,i));
    }

    for(int i=0;i<n;++i){
        int tmp=0;
        for(int j=0;j<7;++j){
            tmp+=v[j][i].score;
        }
        v[7].eb(make_pair(i,tmp));
    }

    for(int i=0;i<8;++i){
        sort(v[i].begin(),v[i].end());
    }

    cin >>q;
    for(int i=0;i<q;++i){
        cin >>x>>t;
        

    }
}

