#include<bits/stdc++.h>
using namespace std;

//move disk id from 'from' to 'to'
void tower(int from, int mid, int to, int n){
    if(n==1)cout<<from<<"->"<<to<<'\n';
    else {
        tower(from, to, mid, n-1);
        tower(from, mid, to, 1);
        tower(mid, from, to, n-1);
    }
}


int main(){
    int n;
    cin >>n;

    tower(1, 2, 3, n);
}