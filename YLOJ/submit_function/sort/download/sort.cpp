#include<bits/stdc++.h>
#include"sort.h"
using namespace std;

string sol(string s){
    string ans;
	int rand_num=0;
    for(char i:s)
    	rand_num+=!(i=='(' || i==')');
    int cnt=1;
    for(char i:s){
    	ans+=(i=='(' || i==')' ? i : (cnt<=(rand_num>>1) ? '(' : ')' ));
        cnt+=!(i=='(' || i==')');
    }
    return ans;
}