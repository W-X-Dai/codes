#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

struct llist{
    node *head, *tail;
    llist(){
        head=nullptr;
        tail=nullptr;
    }

    void insert(int x){
        node *now=head, *tmp=new node;
        tmp->data=x;

        if(head==nullptr){
            head=tmp;
            return;
        }
        while(now->next!=nullptr){
            if(x<now->next->data){
                tmp->next=now->next->next;
                now->next=tmp;
                return;
            }
            now=now->next;
        }
        now->next=tmp;
        tmp->next=nullptr;
    }

    void print(){
        node *now=head;
        while(now!=nullptr){
            cout<<now->data<<'\n';
            now=now->next;
        }
    }
};


int main(){
    llist l;
    l.insert(1);
    l.insert(5);
    l.insert(7);
    l.print();
}