#include<bits/stdc++.h>
#define end cout<<"N0\n";return 0;
using namespace std;

int main(){
    string s,t;

    cin >>s;
    if(s=="number"){
        cout<<70<<'\n';
        return 0;
    }

    int arr[100]={0},num[10]={0},n=0,x;
    
    if(s=="array")
        cin.ignore(),getline(cin,t);

    stringstream ss(t);
    while(ss >>x){
        arr[n]=x;
        ++n;
    }
    
    if(n!=9){
        end
    }
    
    for(int i=0;i<n;++i){
        if(arr[i]>9){
            end
        }
        if(num[arr[i]]){
            end
        }
        num[arr[i]]=1;
    }

    for(int i=0;i<4;++i){
        if(arr[i+1]<arr[i]){
            end
        }
    }

    for(int i=4;i<8;++i){
        if(arr[i+1]>arr[i]){
            end
        }
    }
    cout<<"YES\n";
    return 0;
}

/*
array 
1 2 3 4 9 8 7 6 5
*/