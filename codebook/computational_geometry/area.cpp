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

double area(Pt x,Pt y){
    return abs(x.xx*y.yy-y.xx*x.yy)/2;
}

int main(){
    int x1,x2,y1,y2;

    cin >>x1>>y1>>x2>>y2;
    Pt a=pt(x1,y1),b=pt(x2,y2);

    cout<<area(a,b)<<'\n';

}