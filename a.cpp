#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, w1, w2, h1, h2, arr[10];
    cin >>n>>w1>>w2>>h1>>h2;
    for(int i=0;i<n;++i)cin >>arr[i];

    int lv1=w1*w1*h1, lv2=w1*w1*h1+w2*w2*h2;
    int current=0, mx=-1;

    for(int i=0;i<n;++i){
        int now=current+arr[i];
        if(now>lv2)now=lv2;
        if(current<=lv1){
            if(now<=lv1)mx=max(mx, (now-current)/(w1*w1));
            else if(now<=lv2){
                int h=0;
                h+=(lv1-current)/(w1*w1);
                h+=(now-lv1)/(w2*w2);
            }
        }
    }


}