#include<bits/stdc++.h>
using namespace std;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1, 100005),dis(1,9999); 

int main(){
    srand(rd());
    int arr[10];
    for(int i=0;i<10;++i)arr[i]=i+1;
    
    cout<<10<<'\n';
    for(int i=0;i<10;++i){
        random_shuffle(arr,arr+10);
        cout<<10<<'\n';
        for(int i=0;i<10;++i)cout<<arr[i]<<" ";
        cout<<'\n';  
    }
      


}