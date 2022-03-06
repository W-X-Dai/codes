#include <iostream>
#include <vector>
using namespace std;
int a[100005],k,ans=0;
string s;
vector<int> b;
int main(){
    cin >>k>>s;
    for (int i=0; i<s.size(); i++){
        a[i]=isupper(s[i]);
    }a[s.size()]=-1; 
 
    int cnt = 1;
    for (int i=1; i<=s.size(); i++){
        if (a[i] == a[i-1]) cnt++;
        else{
            b.push_back(cnt);
            cnt=1;
        }
    }b.push_back(0);
    
    cnt=0;
    for (int i=0; i<b.size(); i++){
        if (b[i] == k) cnt++;
        else{
            if ((i-cnt-1)>=0 && b[i-cnt-1]>k) cnt++;
            if (b[i]>k) cnt++;
            ans=max(ans,cnt);
            cnt = 0;
        }
    }
    
    cout <<ans*k<<'\n';
 
    return 0;
}
