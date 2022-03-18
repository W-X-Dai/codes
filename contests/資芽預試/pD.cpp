#include<bits/stdc++.h>
using namespace std;

int arr[105][105];
int l,r,u,d;
int n,m,q,k;
string op;

void show(){
	cout<<"lrud:"<<l<<" "<<r<<" "<<u<<" "<<d<<'\n';
	for(int j=u;j<=d;++j){
		for(int i=l;i<=r;++i){
			cout<<arr[j][i]<<" ";
		}
		cout<<'\n';
	}
}

void simple(){
    if(op=="L"){
        l+=k;
        for(int j=u;j<=d;++j){
        	for(int i=l;i<=r;++i){
        		int b=(i-l+1)*2-1;
        		arr[j][i]+=arr[j][i-b];
        		arr[j][i-b]=0;
			}
		}
		show();
    }else if(op=="R"){
        r-=k;
        for(int j=u;j<=d;++j){
        	for(int i=l;i<=r;++i){
        		int b=(r-i+1)*2-1;
        		arr[j][i]+=arr[j][i+b];
        		arr[j][i+b]=0;
			}
		}
		show();
    }else if(op=="D"){
        d-=k;
        for(int j=u;j<=d;++j){
        	for(int i=l;i<=r;++i){
        		int b=(d-j+1)*2-1;
        		arr[j][i]+=arr[j+b][i];
        		arr[j+b][i]=0;
			}
		}
		show();
    }else if(op=="U"){
        u+=k;
        for(int j=u;j<=d;++j){
        	for(int i=l;i<=r;++i){
        		int b=(u-i+1)*2-1;
        		arr[j][i]+=arr[j-b][i];
        		arr[j-b][i]=0;
			}
		}
		show();
    }
}

void difficult(){
    int s=k+1;
    if(op=="LD"){
        for(int j=u;j<=d;++i){
        	for(int i=l;i<=r;++i){
        		
			}
		}
    }else if(op=="LU"){
        for(int i=l;i<=l+s-1;++i){
            for(int j=u;j<=d+s-1;++j){
                int tmp=i+(k*2-1);
                arr[i][j]+=arr[tmp][j];
            }
        }
    }else if(op=="RD"){
        for(int i=l;i<=r;++i){
            for(int j=u;j<=d;++j){
                int tmp=j+(k*2-1);
                arr[i][j]+=arr[i][tmp];
            }
        }
    }else if(op=="RU"){
        for(int i=l;i<=r;++i){
            for(int j=u;j<=d;++j){
                int tmp=j-(k*2-1);
                arr[i][j]+=arr[i][tmp];
            }
        }
    }    
}

int main(){
    //ios::sync_with_stdio(0),cin.tie(0);
    cin >>n>>m>>q;
    l=1,u=1,r=m,d=n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin >>arr[i][j];
        }
    }

    for(int i=0;i<q;++i){
        cin >>op>>k;
        if(k==0)break;
        if(op.size()==1)simple();
        else difficult();
    }

}
