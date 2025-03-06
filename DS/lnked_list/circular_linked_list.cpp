#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

struct linked_list{
    node *head, *tail;
    
    linked_list(){
        head=nullptr;
        tail=nullptr;
    }

    //insert x at the head
    void insert_head(int x){
        if(head==nullptr){
            head=new node;
            head->data=x;
            head->next=head;
            tail=head;
        }
        node *tmp;
        tmp->data=x;
        tmp->next=head;
        head=tmp;
        tail->next=head;
    }

    //insert x at the end
    void insert_tail(int x){
        if(head==nullptr){
            head=new node;
            head->data=x;
            head->next=head;
            tail=head;
        }
        node *tmp;
        tmp->data=x;
        tail->next=tmp;
        tmp->next=head;
    }

    //insert x after target
    void insert_after(int x,int target){
        node *now=head;
        while(now->next!=tail){
            if(now->data==target){
                node *tmp;
                tmp->data=x;
                tmp->next=now->next;
                now->next=tmp;
            }
        }   
    }

};

int main(){

}