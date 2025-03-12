#include<bits/stdc++.h>
using namespace std;

double data_input[7][640];

void read_data(){
    fstream fin("a", ios::in);
    if(!fin.is_open())cout<<"error";

    for(int i=0;i<7;++i)
    for(int j=0;j<640;++j)
        fin >>data_input[i][j];
}

struct node{
    int data;
    node *next;
};

struct decision_tree{



};

int main(){
    read_data();
    cout<<data_input[0][0];
}