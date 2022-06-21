#include<bits/stdc++.h>
using namespace std;

int in(){
    int rt=0,f=1;
    char ch=getchar();
    while(ch<'0' && ch>'9'){
        if(ch=='-')f=-1;
        ch=getchar();
    }
    while(ch>='0' && ch<='9'){
        rt=rt*10+ch-48;
        ch=getchar();
    }
    return rt*f;

}

void out(int x){
    if(x==0){putchar('0');return;}
    int len=0,num[20];

    while(x>0){
        num[++len]=x%10;
        x/=10;
    }
    for(;len>=1;--len){
        putchar(num[len]+48);
    }
    putchar('\n');
}

int main(){
    int x=in();
    out(x-10);
    out(x);
}