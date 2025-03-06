#include<bits/stdc++.h>
using namespace std;

int main(){
	srand(time(0));
	int n=20;

	cout<<n<<'\n';
	for(int i=0;i<n;i++)cout<<rand()%11<<" \n"[i==n-1];
	for(int i=0;i<n;i++)cout<<rand()%11<<" \n"[i==n-1];
	for(int i=0;i<n;i++)cout<<rand()%11<<" \n"[i==n-1];

}