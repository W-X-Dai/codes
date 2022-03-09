#include<bits/stdc++.h>
#define AC ios::sync_with_stdio(0),cin.tie(0);
using namespace std;

int T,N,arr[100005];
stack<int> st;

int main(){
//  AC    
    
    cin >>T;
    while(T--){
        while(!st.empty())st.pop();
        
        cin >>N;
        for(int i=1;i<=N;++i){
            cin >>arr[i];
        }
        int cnt=0,j=1;
        for(int i=1;i<=N;){
            int now=arr[i];
            if(j==now){
            //    cout<<"j"<<'\n';
            //    cout<<j<<" ";
                ++cnt,++j;++i;
            }else if(!st.empty()){
                cout<<st.top();
                while(!st.empty() && st.top()==now){
                    cout<<st.top()<<" "<<st.size();
                    st.pop();++cnt;++i;
                }
            }else{
                cout<<"jk"<<j<<'\n';
                st.push(j),++j;++i;
            }
        }
        cout<<"cnt:"<<cnt<<'\n';
        if(cnt==N)cout<<"Yes\n";
        else cout<<"No\n";
    }

}