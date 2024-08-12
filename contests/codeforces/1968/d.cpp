#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,k,pb,ps,arr[N],p[N];

inline void sol1(){
	int bm=0,sm=0,bp=pb,sp=ps,b=0,s=0;
    for(int i=1;i<=min(n,k);++i){

    //    cout<<b<<" "<<(k-i)*p[bp]<<'\n';
        b+=p[bp];

        s+=p[sp];
        
        bm=max(bm,b+(k-i)*p[bp]);
        sm=max(sm,s+(k-i)*p[sp]);
    //    cout<<b+(k-i)*p[bp]<<'\n';
    //    cout<<bm<<" "<<sm<<'\n';
        bp=arr[bp];sp=arr[sp];

    }
    if(bm>sm)cout<<"Bodya\n";
    if(bm<sm)cout<<"Sasha\n";
    if(bm==sm)cout<<"Draw\n";
}


inline void init(){
	cin >>n>>k>>pb>>ps;
	for(int i=1;i<=n;++i)cin >>arr[i];
    for(int i=1;i<=n;++i)cin >>p[i];
    sol1();
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init();
    return 0;
}


// inline void sol(){
//     int bmc=1,smc=1,bm=0,sm=0,bp=arr[pb],sp=arr[ps],b=p[pb],s=p[ps];
//     int ii=1;
//     while(1){

//         if(p[bp]>bm){
//             bm=p[bp];
//             bmc=ii;
//         }
//         bp=arr[bp];
//         if(bp==pb)break;
//     }
// }