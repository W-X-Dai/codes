#include<bits/stdc++.h>
using namespace std;


int main(){
	
	srand(time(0));
	ofstream f1;
	ofstream f2;
	f1.open("g059_04.in",ios::trunc); 
	f2.open("g059_04.out",ios::trunc);
	
	int n,a,b,arr[7][7]={0};
	int ans=0;
	
	cin >>n;
	f1<<n<<'\n';

	for(int i=0;i<n;i++){
		cin >>a>>b;
		f1<<a<<" "<<b<<'\n';
		arr[b+1][a+1]=1;
	}
	
	for(int i=1;i<6;i++){
		for(int j=1;j<6;j++)
			cout<<arr[j][i]<<" ";
		cout<<'\n';
	}
	
	cin >>a>>b;
	f1<<a<<" "<<b<<'\n';
	
	a++,b++;
	if(arr[a-1][b-1])ans++;
	if(arr[a+1][b+1])ans++;
	if(arr[a][b-1])ans++;
	if(arr[a][b+1])ans++;
	if(arr[a-1][b])ans++;
	if(arr[a+1][b])ans++;
	if(arr[a-1][b+1])ans++;
	if(arr[a+1][b-1])ans++;
	
	cout<<ans<<'\n';
	f2<<ans<<'\n';
	
}
