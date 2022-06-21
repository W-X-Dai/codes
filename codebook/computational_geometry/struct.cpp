#include<bits/stdc++.h>
#define Pt pair<double,double> 
#define m_p make_pair
#define xx first
#define yy second

using namespace std;

Pt pt(double x,double y){
    return m_p(x,y);
}

Pt operator+ (const Pt &a,const Pt &b){
    return pt(a.xx+b.xx,a.yy+b.yy);
}

Pt operator- (const Pt &a,const Pt &b){
    return pt(a.xx-b.xx,a.yy-b.yy);
}


int main(){
    int a,b;

    cin >>a>>b;
    Pt A=pt(a,b);
}