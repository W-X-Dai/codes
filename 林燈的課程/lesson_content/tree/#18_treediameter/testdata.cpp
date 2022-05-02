#include<bits/stdc++.h>
#define eb emplace_back
#define pii pair<int,int>
#define m_p  make_pair
#define ff first
#define ss second

using namespace std;


unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 1000),dis(1,100000000); 

vector<int> v[100005];
vector<pii> o;
int arr[100005],therest,chi;



inline void tree(int num){
    ios::sync_with_stdio(0),cin.tie(0);

    srand(time(0));
    int n=90000+dis(rd)%10000;
    for(int i=1;i<=100000;++i)arr[i]=i;
    random_shuffle(arr+1,arr+n+1);

    chi=2;

    for(int i=1;chi<=n;++i){
        int _rand=dist(rd)%3+1;
        for(int j=1;chi<=n && j<=_rand;++j){
            v[i].eb(chi);
            ++chi;
        }
    }
    // for(int i=1;i<=n;++i)cout<<arr[i]<<" ";
    // cout<<'\n';
    // for(int i=1;i<=n;++i){
    //     cout<<i<<":";
    //     for(int j:v[i])cout<<j<<" ";
    //     cout<<'\n';
    // }

    // cout<<'\n';

    for(int i=1;i<=n;++i){
        int tmp=i;
        i=arr[i];
    //    cout<<arr[i]<<":";
        for(int j:v[i]){
        //    cout<<arr[j]<<" ";
            o.eb(m_p(arr[i],arr[j]));
        }
    //    cout<<'\n';
        i=tmp;
    }

    string s="t"+to_string(num)+".in";
    ofstream f(s,ios::trunc);
    f<<n<<'\n';

    // for(int i=1;i<=n;++i){
    //     int tmp=i;
    //     i=arr[i];
    //     for(int j:v[i])f<<arr[i]<<" "<<arr[j]<<'\n';
    //     i=tmp;
    // }

    sort(arr+1,arr+100001);
    random_shuffle(arr,arr+n-1);

    cout<<'\n';
    for(int i=0;i<n-1;++i){
    //    cout<<o[arr[i]].ff<<" "<<o[arr[i]].ss<<'\n';
        f<<o[arr[i]].ff<<" "<<o[arr[i]].ss<<'\n';
    }    
}

int main(){

    for(int i=1;i<=10;++i)tree(i);

}