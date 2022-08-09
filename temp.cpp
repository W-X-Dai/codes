#include<bits/stdc++.h>
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

inline int yuckycode(){
    int rt,x=0;
    rt=  ( ( x==1 ? true : false ) ? false : true ) ? ( ( x==0 ? true : false ) ? ( x==0 ? true : false ) : true ) : ( ( x=1 ? true : false ) ? false : true );
    return rt;
}

bool cmp(int a,int b){
    return a<b;
}


int main(){
    int arr[10]={11,12,13,22,23,24,33,32,31,99};
    sort(arr,arr+10,cmp);
    for(int i:arr)cout<<i<<" ";
}