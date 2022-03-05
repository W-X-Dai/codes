#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n,arr[6];
    string s;
    
    cin >>n;
    for(int i=0;i<n;++i){
        fill(arr,arr+6,0);
        cin >>s;
        for(int i=0;i<s.size();++i){
            arr[s[i]-'A'+1]++;
        }
        if(arr[1]==0){
            cout<<"NO\n";
            continue;
        }
        for(int i=0;i<5;++i)
        for(int i=2;i<=5;++i){
            if(arr[i]==0){
                for(int j=1;j<=i/2;++j){
                    if(arr[j]>0 && arr[i-j]>0){
                        arr[j]--;
                        arr[i-j]--;
                        arr[i]=-1;
                        break;
                    }
                }
            }
        }
        int det=1;
        for(int i=1;i<=5;++i){
            if(arr[i]==0)det=0;
        }
        if(det)cout<<"YES\n";
        else cout<<"NO\n";
    }
}


