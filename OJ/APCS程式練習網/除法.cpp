#include<bits/stdc++.h>
using namespace std;

int arr[10]={0,1,2,3,4,5,6,7,8,9};
int arr1[5],arr2[5],a,b,suc=0;
const int inf=3628800;

void num(){
	int i;
	for(i=0;i<5;i++){
		arr1[i]=arr[i];
		arr2[i]=arr[i+5];
	}
	a=0,b=0;
	for(i=0;i<5;i++){
		a+=arr1[i]*pow(10,i);
		b+=arr2[i]*pow(10,i);
	}
}

int arran(int n){
	for(int i=0;i<inf;i++){
		num();
		if(b%a==0)
			if(b/a==n)cout<<b<<" / "<<a<<" = "<<n<<'\n',suc=1;
		
		next_permutation(arr,arr+10);	
	}

}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	int n;
	
	while(cin >>n){
		suc=0;
		if(n==0)return 0;
		arran(n);
		if(!suc)cout<<"There are no solutions for "<<n<<"."<<'\n';
		cout<<'\n';
	}
	
}

