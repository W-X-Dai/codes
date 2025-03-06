#include<bits/stdc++.h>
using namespace std;

//setting up the random function
unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1,50);

inline int moveTortoise(){
	int r=dist(rd);
	if(r<=25)return 3;
	if(r<=33)return -6;
	return 1;
}

inline int moveHare(){
	int r=dist(rd);
	if(r<=19)return 0;
	if(r<=27)return 11;
	if(r<=35)return 9;
	if(r<=45)return 1;
	return -2;
}

//show the situation
inline void draw(int t,int h){
	//tie
	if(t==h)
	for(int i=1;i<=70;++i){
		if(i==t)cout<<"OUCH!!!";
		else cout<<" ";
	}
	else
	for(int i=1;i<=70;++i){
		if(i==t)cout<<"T";
		else if(i==h)cout<<"H";
		else cout<<" ";
	}

	cout<<'\n';
}

int main(){
	cout<<"BANG !!!!!\n";
	cout<<"AND THEY’RE OFF !!!!!\n";

	int T=1,H=1,clock=0;
	
	//repeat until tortoise or hare finish the game
	while(T<=70 and H<=70){
		cout<<"clock:"<<clock<<'\n';
		draw(T,H);
		T+=moveTortoise();
		//should animal's position be negative?
		//I'm not sure, but I suppose they won't drop out the field
		if(T<1)T=1;
		H+=moveHare();
		if(H<1)H=1;
		++clock;
	}

	//the loop finish when the game is end
	//so we can show the result
	if(T==H){
		cout<<"It's a tie.\n";
	}else if(T>H){
		cout<<"TORTOISE WINS !!!!\n";
	}else cout<<"HARE WINS. YUCK !!!\n";

	return 0;
}