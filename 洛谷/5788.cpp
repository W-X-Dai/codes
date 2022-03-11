#include<bits/stdc++.h>
using namespace std;

int arr[3000005],ans[3000005];
stack<int> st;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n;
    cin >>n;
    for(int i=1;i<=n;++i)cin >>arr[i];

    for(int i=1;i<=n;++i){
        if(st.empty())st.push(i);
        else if(arr[i]>arr[st.top()]){
            while(!st.empty() && arr[i]>arr[st.top()]){
                ans[st.top()]=i;
                st.pop();
            }
            st.push(i);

        }else st.push(i);
    }
    for(int i=1;i<=n;++i)cout<<ans[i]<<" ";
    cout<<'\n';
}