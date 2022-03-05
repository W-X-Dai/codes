#include<bits/stdc++.h>
using namespace std;

double func(double a,double b){
	a*=100;
	a/=b;
	return a/100;
}

int main(){
	int bin[8];
	bin[1]=001,bin[2]=010,bin[3]=011,bin[4]=100,
	bin[5]=101,bin[6]=110,bin[7]=111;
	
	double l,nl;
	int t,x,n,i;
	string s;
	queue<int>q;
	
	while(cin >>n){
		cin >>s;
		l=s.size();
		nl=0;
		
		for(i=0;i<l;i++){
			x=s[i];
			if(x!='0' and x!='1'){
				t=-1;
				break;
			}
			t=1,i++;
			while(s[i]==x)t++,i++;
			i--;
			if(t>7){
				t=-1;
				break;
			}
			nl+=4;
			q.push(x);
			q.push(bin[t]);	
		}cout<<'\n';
		for(i=0;!q.empty();i+=2){
			for(int ii=0;ii<2;ii++)
				cout<<q.front(),q.pop();	
			cout<<" ";		
		}
		cout<<setprecision(2)<<fixed<<func(nl,l)<<"%"<<'\n';
	}
	
}

