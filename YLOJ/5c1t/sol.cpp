#include<bits/stdc++.h>
#define int long long
using namespace std;

int arr[5][6],ans[5];

int32_t main(){
    for(int i=0;i<5;++i){
        for(int j=0;j<6;++j)
         cin >>arr[i][j];
    }

    int l=-20,r=20;

    for(ans[0]=l;ans[0]<=r;++ans[0])
    for(ans[1]=l;ans[1]<=r;++ans[1])
    for(ans[2]=l;ans[2]<=r;++ans[2])
    for(ans[3]=l;ans[3]<=r;++ans[3])
    for(ans[4]=l;ans[4]<=r;++ans[4]){
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
        if(ok){
            for(int i=0;i<5;++i)cout<<ans[i]<<" \n"[i==4];
            return 0;
        }
    }
    cout<<"-1";
}

//10 8 14 -18 -13