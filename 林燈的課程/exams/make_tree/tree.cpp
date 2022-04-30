#include<bits/stdc++.h>
#define eb emplace_back

using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 3),dis(1,100000000); 

vector<int> v[100005];
int arr[100005];

int main(){
    int n;
    for(int i=1;i<=100000;++i)arr[i]=i;
    cin >>n;
//    random_shuffle(arr+1,arr+n+1);

    for(int i=1;i<=n;++i){
        int t=dist(rd);
        if(t+i>n)t=n-i;

        for(int j=i+1;j<=t+i;++j){
            v[i].eb(arr[j]);
        }
        i+=t;
    }
    for(int i=1;i<=n;++i){
        cout<<i<<":";
        for(int j:v[i])cout<<j<<" ";
        cout<<'\n';
    }

}