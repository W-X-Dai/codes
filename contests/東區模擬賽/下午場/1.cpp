#include<bits/stdc++.h>
#define N 3005
using namespace std;

struct s{
    int m;
    int com;
};

int main(){
    int n,a,b,arr[N],mxn=-1,com,t=0;   
    s node;//state.m=0,state.com=1;
    cin >>n;
    cin >>a;
    for(int i=1;i<n;++i){
        cin >>b;
        if(b>a && node.m==1){
            node.com++;
        }else if(node.m==-1){
            node.m=1;
            if(mxn<min(node.com,com)){
                mxn=min(node.com,com);
                t=1;
            }else if(mxn==min(node.com,com)){
                ++t;
            }
        }else if(node.m==0)node.m=-1;
        if(a>b && node.m==-1){
            node.com++;
        }else if(node.m==1){
            com=node.com;
            node.com=1;
            node.m=-1;
        }else if(node.m==0)node.m=-1;
        if(a==b){
            node.com=0;
        }
    }
    cout<<mxn<<" "<<t<<'\n';

}