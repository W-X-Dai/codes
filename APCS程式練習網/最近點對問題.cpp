#include<bits\stdc++.h>
#define ll long long
#define MXN 10005

using namespace std;

struct node{
	double x;
	double y;
};
node point[MXN];

bool cmp(node a,node b){
	return a.x<b.x;
}

double dist(node a,node b){
	return abs((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

double mindist(int l,int r){
	if(l>r)return 10001;
	

}

int main(){
	int n;
	
	
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>point[i].x;
		cin >>point[i].y;
	}
	sort(point,point+n,cmp);
	
	double ans=mindist(0,n-1);
	if(ans>=10000) cout<<"INFINITY\n";
	else cout<<n<<'\n';
	
	return 0;
	
}

