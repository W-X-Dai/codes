#include<iostream>
using namespace std;

int strlen(char arr[]){
	int i=0;
	while(arr[i]!='\0'){
		i++;	
	}
	return i;
}

bool strcmp(char arr[],char arr1[]){
	int i;
	for(i=0;arr[i]!='\0';i++){
		if(arr[i]!=arr1[i])return 0;
	}
	return 1;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	char arr[1000],arr1[1000];
	cin.getline(arr,1000);
	cin.getline(arr1,1000);
	
	cout<<strlen(arr)<<'\n';
	if(strcmp(arr,arr1))cout<<"Same"<<'\n'; 
	else cout<<"Different"<<'\n';
	
}

