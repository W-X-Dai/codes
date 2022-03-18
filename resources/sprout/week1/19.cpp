#include<bits/stdc++.h>
#define AC ios::sync_with_stdio(0),cin.tie(0);
using namespace std;

int T,arr[100005],x;
stack<int> st;

inline void sol(){
    AC
    int n,bk;
    int point=1;


    cin >>n;
    for (int i=0;i<n;i++)
        cin >>arr[i];
    
    int i;
    for(i=0;i<n;i++){
        if(!st.empty() && st.top()==arr[i]){
            st.pop();
        }else if(arr[i]>=point){
            for(int j=point;j<arr[i];j++)
                st.push(j);
            point=arr[i]+1;
        }else break;
    }
    if(i==n)cout<<"Yes\n";
    else cout<<"No\n";
        

}


int main(){
    
    cin >>T;
    while(T--){
        sol();
    }

}