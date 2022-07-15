#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    int best=-1;
    int worst=101;
    for (int i=0;i<n;i++){
        cin >>a[i];
        if (a[i]<60){
            best=max(best,a[i]);
        } else {
            worst=min(worst,a[i]);
        }
    }
    
    sort(a,a+n);
    
    for(int i=0;i<n;i++){
        if(i)cout<< " ";
        cout<<a[i];
    }
    cout<<"\n";
    if(best<0)cout<<"best case\n";
    else cout<<best<<"\n";
    
    if(worst>100)cout<<"worst case\n";
    else cout<<worst<<"\n";
    
    return 0;
}
