#include<bits/stdc++.h>
#define int long long
using namespace std;

int arr[5][6],ans[5];

int32_t main(){
    for(int i=0;i<5;++i){
        for(int j=0;j<6;++j)
         cin >>arr[i][j];
    }
    for(int i=0;i<5;++i)cin >>ans[i];

    int l=-20,r=20;

    int ok=1;
    for(int i=0;i<5;++i){
        int sum=0;
        for(int j=0;j<5;++j){
            sum+=ans[j]*arr[i][j];
        }
        if(sum!=arr[i][5]){
            ok=0;continue;
        }
        
    }
    cout<<(ok ? "YES" : "NO");
    

    
}