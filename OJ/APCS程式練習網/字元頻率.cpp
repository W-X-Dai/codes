#include<bits/stdc++.h>
using namespace std;

struct info{
	int n;
	int id;
};

bool cmp(info a,info b){
	
    if(a.n<b.n)return 1;
    else if(a.n>b.n)return 0;
    else{
        if(a.id>b.id)return 1;
        return 0;   
    }   
    
}

int main(){
	
	int n=130,i,l;
	string s;
	
	while(getline(cin,s)){
		info ch[130]={0};
		for(i=0;i<130;i++)ch[i].id=i;
		l=s.size();
		for(i=0;i<l;i++){
			ch[s[i]].n++;
		}
		sort(ch,ch+n,cmp);
		
		for(i=0;i<130;i++){
			if(ch[i].n)
				cout<<ch[i].id<<" "<<ch[i].n<<'\n';
		}
		cout<<'\n';
		s.clear();
	}
	
	
}

