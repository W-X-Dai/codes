#include<bits/stdc++.h>
using namespace std;

multiset<int> s;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int x,cnt=0;

    while(cin >>x){
        if(x==0)break;
        if(x==-1 && cnt){
            cout<<*s.begin()<<" ";
            s.erase(s.begin());
            cnt--;  
        }else if(x==-2 && cnt){
            auto it=s.end();
            it--;
            cout<<*it<<" ";
            s.erase(it);
            cnt--;
        }else if(x>0)s.insert(x),++cnt;
        
    }
    cout<<'\n';

}