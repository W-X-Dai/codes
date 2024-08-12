#include <bits/stdc++.h>
#define jizz cin.tie(0);ios_base::sync_with_stdio(0);
#define lld long long
#define F first
#define S second
#define MOD 1000000007
using namespace std;
typedef pair<int,int> Pair;
int cnt[405],tmp[405];
int n,m;
bool check(){
    for(int j = 1; j <= n; j++){
        if(cnt[j] < 2)continue;
        for(int i = 1; i <= n ; i++)tmp[i] = cnt[i];
        tmp[j] -= 2;
        bool flag = 0;
        for(int i = 1; i <= n-2 ; i++){
            tmp[i] %= 3;
            if(tmp[i] <= tmp[i+1] && tmp[i+2] >= tmp[i]){
                tmp[i+1] -= tmp[i];
                tmp[i+2] -= tmp[i];
                tmp[i] = 0;
            }else {flag = 1;break;}
            
        }
        if(!(tmp[n]%3) && !(tmp[n-1]%3) && !(tmp[n-2]%3) && !flag )return 1;
    }
    return 0;
}
signed main(){
    cin >> n >>m;
    for(int i = 0 ; i < 3*m+1 ; i++){
        int a;cin >>a;
        cnt[a]++;
    }
    bool f = 0;
    for(int i = 1; i <= n ; i++){
        cnt[i]++;
        if(check())cout << i <<' ',f = 1;
        cnt[i]--;   
    }
    if(!f)cout << "NO\n";
    return 0;
}