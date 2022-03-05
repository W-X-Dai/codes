#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	fstream file;
	file.open("vocabularies.csv",ios::out | ios::trunc);
	
	if(!file)exit(1);
        
    file<<"½s¸¹"<<","<<"µü©Ê"<<","<<"³æ¦r"<<'\n';
    
	string s;
	int i=1010,x;
	while(i<=1400){
		cin >>s;
		file<<i<<"."<<","<<s<<'\n';
		i++;
	}
}

