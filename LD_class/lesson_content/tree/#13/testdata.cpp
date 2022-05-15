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

vector<int> v[200005];
vector<pii> o;
int arr[200005],output[200005],therest,chi;



inline void tree(int num){
    cout<<num<<'\n';
    ios::sync_with_stdio(0),cin.tie(0);

    srand(time(0));
    int n=190000+dis(rd)%10000;
    for(int i=1;i<=200000;++i)arr[i]=i;
    random_shuffle(arr+1,arr+n+1);

    chi=2;

    for(int i=1;chi<=n;++i){
        int _rand=dist(rd)%200+1;
        for(int j=1;chi<=n && j<=_rand;++j){
            v[i].eb(chi);
            ++chi;
        }
    }

    for(int i=1;i<=n;++i){
        for(int j:v[i]){
            output[j]=i;
        }
    }

    string s="t"+to_string(num)+".in";
    ofstream f(s,ios::trunc);
    f<<n<<'\n';


    sort(arr+1,arr+200001);
    random_shuffle(arr,arr+n-1);

    cout<<'\n';
    for(int i=2;i<=n;++i){
        f<<output[i]<<" ";
    }    
    f<<'\n';
}

int main(){

    for(int i=1;i<=10;++i)tree(i);

}