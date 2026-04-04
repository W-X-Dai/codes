#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,arr[N];
bool is_prime[N];
vector<int> prime;

inline void init(){
	cin >>n;
}

inline void find_prime(){
    for(int i=1;i<N;++i)is_prime[i]=1;
    for(int i=2;i*i<N;++i){
        if(is_prime[i]){
            for(int j=i*i;j<N;j+=i){
                is_prime[j]=0;
            }
        }
    }
    prime.eb(1);
    for(int i=1;i<N;++i){
        if(is_prime[i])prime.eb(i);
    }
    // cout<<prime.size();
}

inline void sol(){
	cout<<1<<" ";
    for(int i=1;i<n;++i){
        cout<<prime[i]*prime[i+1]<<" ";
    }
    cout<<'\n';
}

int32_t main() {
    // ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    find_prime();
    while(t--)init(),sol();
    return 0;
}
