#include<bits/stdc++.h>
using namespace std;


stack<int> st;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int i,j,k=0,x,ans=0;
	
	cin >>n;
	for(i=0;i<n;i++){
		cin >>x;
		if(!st.empty()){
			
			if(st.top()<=x){
				k=0;
				do{
					cout<<st.top()<<" "<<x<<" "<<ans<<'\n';
					ans++;
					if(x==st.top())k++;
					st.pop();
					if(st.empty())break;
				}while(st.top()<=x);
				
			}
			if(!st.empty())	ans++;
			for(j=0;j<k;j++)st.push(x);
			st.push(x);
		}else st.push(x);
		
	}
	cout<<ans*2;
	
}

