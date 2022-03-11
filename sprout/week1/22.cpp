#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int n, a;
ll ans;
stack<int>st,cnt;

void sol(){
    ios::sync_with_stdio(0);cin.tie(0);
    while(!st.empty())st.pop();
	while(!cnt.empty())cnt.pop();
	ans=0;

	cin >>n;
    for (int i=0;i<n;i++){
        cin >>a;
        while (!st.empty() && st.top()<a){
            ans+=cnt.top();
            cnt.pop();
            st.pop();
        }
        if (!st.empty() && st.top()==a){
            ans+=cnt.top();
            cnt.top()++;
        }
        else {
            st.push(a);
            cnt.push(1);
        }
        if (st.size() > 1) ans++;
    }
    cout<<ans<<'\n';	
}

int main(){
	int t;
	cin >>t;
	while(t--)sol();
}