#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

struct linked_list{
	node* head;
	node* tail;

	//initialization
	linked_list(){
		head=NULL;
		tail=NULL;
	}

	//insert x before target
	void insert_before(int target, int x){
		node *now=head;
		if(now->data==target){
			insert_head(x);
			return;
		}
		while(now->next!=NULL){
			if(now->next->data==target){
				node *tmp=new node;
				tmp->data=x;
				tmp->next=now->next;
				now->next=tmp;
				return;
			}
			now=now->next;
		}

	}

	//insert x after target
	void insert_after(int target,int x){
		node *now=head;
		while(now!=NULL){
			if(now->data==target){
				node* tmp=new node;
				tmp->data=x;
				tmp->next=now->next;
				now->next=tmp;
				return;
			}
			now=now->next;
		}
	}

	//insert x at the first place of the list
	void insert_head(int x){
		node* tmp=new node;
		tmp->data=x;
		tmp->next=head;
		head=tmp;
	}
	
	//insert x at the end
	void insert_end(int x){
		if(head==NULL){
			node* tmp=new node;
			tmp->data=x;
			tmp->next=nullptr;
			head=tmp;
			tail=tmp;
			return;
		}
		node* tmp=new node;
		tail->next=tmp;
		tmp->data=x;
		tail=tmp;
	}
	
	//print the list
	void print(){
		node* now=head;
		while(now!=nullptr){
			cout<<now->data<<'\n';
			now=now->next;
		}
	}
	
	//remove the item before target
	void remove_before(int target){
		node *now=head;
		if(now->next->data==target){
			remove_head();
			return;
		}
		while(now->next->next!=NULL){
			if(now->next->next->data==target){
				node *tmp=now->next;
				now->next=now->next->next;
				free(tmp);
			}
			now=now->next;
		}
	}

	//remove the first item
	void remove_head(){
		node *tmp=head;
		head=head->next;
		free(tmp);
	}

	//remove the last item
	void remove_end(){
		node *now=head;
		while(now->next->next!=NULL){
			now=now->next;
		}
		node *tmp=now->next;
		now->next=NULL;
		free(tmp);
	}
};

int main(){
	linked_list l;
	l.insert_end(1);
	l.insert_end(2);
	l.insert_end(3);
	l.print();
	l.insert_before(2,11);
	l.remove_head();
	l.print();


}
