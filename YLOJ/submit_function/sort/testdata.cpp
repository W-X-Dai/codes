#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;

int limit_id[]={2,4,7,10},limit_n[]={2,1000,100000,200000};
int limit_arr_i[]={100,1000,1000,1000000000};

inline void testdata(int id){
    string sss="sort"+to_string(id)+".in",s;
    ofstream f(sss,ios::trunc);
    
    int _id=lower_bound(limit_id,limit_id+4,id)-limit_id;
    cerr<<_id<<'\n';
    int l_n=limit_n[_id];
    int l_i=limit_arr_i[_id];

    int n=rnd.next(max(2,l_n-100),l_n);
    f<<n<<'\n';
    for(int i=0;i<n;++i){
        f<<rnd.next(1,l_i)<<" \n"[i==n-1];
    }

}

inline void sol(int id){
    string sss="sort"+to_string(id)+".in";
    string ssss="sort"+to_string(id)+".out";
    ifstream f1(sss);    
    ofstream f2(ssss,ios::trunc);
    int n,arr[200005];
    f1>>n;
    for(int i=0;i<n;++i){
        f1>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;++i){
        f2<<arr[i]<<" \n"[i==n-1];
    }
    return;
}

int main(){
    for(int i=1;i<=10;++i)testdata(i),sol(i);
}