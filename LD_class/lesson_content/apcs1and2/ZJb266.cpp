#include<bits/stdc++.h>
using namespace std;

int arr[120][20],mov[20];
int r,c;

int read(){
    int res=0,f=1;
    char ch=getchar();
    while(ch<'0' || ch>'9'){
        if(ch=='-')f=-f;
        ch=getchar();
    }
    while(ch>='0' && ch<='9'){
        res=res*10+ch-48;
        ch=getchar();
    }
    return res*f;
}

void turn(){
    int tmp[20][20];
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            tmp[c-j][i]=arr[i][j];
        }
    }
    for(int i=0;i<r;++i)
    for(int j=0;j<c;++j){
        cout<<tmp[i][j]<<" ";
    }
    cout<<'\n';
    swap(r,c);
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            arr[i][j]=tmp[i][j];
        }
    }
}

void reve(){

}

void show(){
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }
}

int main(){
    int x;
    cin >>r>>c>>x;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin >>arr[i][j];
        }
    }
    turn();
    show();
}
