#include<bits/stdc++.h>
#define AC ios::sync_with_stdio(0),cin.tie(0);
using namespace std;

int T,N,arr[100005],x;
stack<int> st;
queue<int> q;

int main(){
//  AC    
    
    cin >>T;
    while(T--){
        while(!st.empty())st.pop();
        while(!q.empty())q.pop();
        cin >>N;
        for(int i=1;i<=N;++i){
            cin >>x;q.push(x);
        }
        int cnt=0,j=1;
        for(int i=1;i<=N;++i){
            if(i==q.front());
        }
        cout<<"cnt:"<<cnt<<'\n';
        if(cnt==N)cout<<"Yes\n";
        else cout<<"No\n";
    }

}