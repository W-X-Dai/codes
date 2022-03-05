#include<bits/stdc++.h>
using namespace std;

int t,n;
char ch[2000010];
int num(int l,int r,char a){
    if(l==r){
        if(ch[l]==a) return 0;
        else return 1;
    } 
    int mid=l+r>>1,sum1=0,sum2=0;
    for(int i=l;i<=mid;i++)
        if(ch[i]!=a) sum1++;
    sum1+=num(mid+1,r,a+1);
    for(int i=mid+1;i<=r;i++)
        if(ch[i]!=a) sum2++;
    sum2+=num(l,mid,a+1);
    return min(sum1,sum2);
}
int main(){
    cin >>t;
    while(t--){
        cin >>n;
        for(int i=1;i<=n;i++)cin >>ch[i];
        if(n==1){
            if(ch[1]=='a') puts("0");
            else puts("1");
            continue;
        }
        printf("%d\n",num(1,n,'a'));
    }   
}