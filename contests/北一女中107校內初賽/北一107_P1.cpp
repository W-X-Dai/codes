#include<bits/stdc++.h>
using namespace std;

string s1,s2,s[1005][1005];
int lcs[1005][1005],arr[1005];
int n,i,j,l;

int main(){
	cin >>s1>>s2;
	l=s1.size();
	
	for(i=1;i<=l;i++){
		lcs[i][0]=0;
		for(j=1;j<=l;j++){
			if(s1[i-1]==s2[j-1]){
				lcs[i][j]=lcs[i-1][j-1]+1;
				s[i][j]=s[i-1]
			}
			else
				lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
		}
	}
	cout<<lcs[l][l]<<'\n';

	
	
}

