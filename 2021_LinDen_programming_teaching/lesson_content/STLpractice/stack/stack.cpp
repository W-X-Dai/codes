#include<bits/stdc++.h>
using namespace std;

struct s{
	int id;
	int arr[10000];
};

s st;

void push_back(int x){
	st.arr[st.id]=x;
	++st.id;
}

bool empty(){
	return st.id;
}

void pop_back(){
	if(st.id==0){
		cout<<"error\n";
		return;
	}
	st.id--;
}

int top(){
	return st.arr[st.id]; 
}

int main(){
	st.id=0;
	cout<<empty()<<'\n';
	push_back(5);
	push_back(7);
	cout<<empty()<<'\n';
	cout<<top()<<'\n';
	pop_back();
	pop_back();
	cout<<empty()<<'\n';
	cout<<top()<<'\n';
	

}

