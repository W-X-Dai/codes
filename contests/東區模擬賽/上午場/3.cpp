#include<bits/stdc++.h>
#define N 10005
#define ll long long
#define WA ios::sync_with_stdio(0),cin.tie(0);
using namespace std;

int value[500];

int leng(int x){
    int i;
    for(i=1;x>10;++i){
        x/=10;
    }
    if(x==10)return i+1;
    return i;
}

int add(int x){
    int tmp[100];
    int l=leng(x),carry=0;
    //** initial
    for(int i=1;i<=l;++i){
        tmp[i]=x%10;
        x/=10;
    }
   
    for(int i=1;i<=l+1;++i){
        value[i]+=tmp[i]+carry;
        if(value[i]>=10){
            value[i]%=10;
            carry=1;
        }else carry=0;

    }
}

int arrtoi(int arr[],int n){
    int x=0;
    for(int i=1;i<=n;++i){
        x+=arr[i]*pow(10,i-1);
    }
    return x;
}

int main(){
    WA
    int a[205],b[205],c[205];
    string ta,tb,tc;
    int t,l,pt=1;
    char sa,ab,sc,tmp;
    ll ans;

    cin >>t;
    
    while(t--){
        // ** initial
        ta.clear(),tb.clear(),tc.clear();
        memset(a,0,205),memset(b,0,205),memset(c,0,205);

        cin >>ta>>tb>>tc;
        l=max(ta.size(),tb.size());
        if(ta.size()<l){
            int tmp=ta.size();
            for(int i=1;i<=tmp;++i){
                a[i]=ta[tmp-i]-48;
            }
            for(int i=tmp+1;i<=l;++i)
                a[i]=0;
            tmp=tb.size();
            for(int i=1;i<=l;++i){
                b[i]=tb[tmp-i]-48;
            }
        }else{
            int tmp=tb.size();
            for(int i=1;i<=tmp;++i){
                b[i]=tb[tmp-i]-48;
            }
            for(int i=tmp+1;i<=l;++i)
                b[i]=0;
            tmp=ta.size();
            for(int i=1;i<=l;++i){
                a[i]=ta[tmp-i]-48;
            }
        }
        for(int i=1;i<=tc.size();++i){
            c[i]=tc[tc.size()-i]-48;
        }
        for(int i=1;i<=l;++i)cout<<a[i]<<" ";
        cout<<'\n';
        for(int i=1;i<=l;++i)cout<<b[i]<<" ";
        cout<<'\n';
        for(int i=1;i<=tc.size();++i)cout<<c[i]<<" ";
        cout<<'\n';
        
        int pt=tc.size(),ttmp[11]={0},tmpa,tmpb;
        for(int i=tc.size();i>0;--i){
            for(int j=1;j<=c[i];++j){
                ttmp[j]=a[pt];
                tmpa=arrtoi(ttmp,c[i]);
            }
            for(int j=1;j<=c[i];++j){
                ttmp[j]=b[pt];
                tmpb=arrtoi(ttmp,c[i]);
            }
            pt-=c[i];
            add(tmpa),add(tmpb);
        }
        int k;
        for(k=500;value[k]==0;--k);
        for(;k!=0;--k)cout<<value[k];
        cout<<'\n';
    }
}