#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int n,len;
string s;

bool isNum(char x){
    return (x<='9' && x>='0');
}

int v2i(vector<int> v){
    int l=v.size(),ans=0;
    for(int i=0;i<l;++i){
        ans+=v[i]*powl(10,l-i-1);
    }    
    return ans;
}

int main(){
    cin >>n;
    cin >>s;

    int cnt=0;
    for(int i=0;i<n;++i){
        if(s[i]<='z' && s[i]>='a'){
            ++cnt;
        }else{
            vector<int> v;
            while(isNum(s[i])){
                v.eb(s[i]-'0');
                ++i;
            }
            len+=cnt*v2i(v);
            if(i!=n-1)--i;cnt=0;
        }
    }
    cout<<len<<'\n';
    if(len<=1000000){
        vector<char> c;
        for(int i=0;i<n;++i){
            if(s[i]<='z' && s[i]>='a'){
                c.eb(s[i]);
            }else{
                vector<int> v;
                while(isNum(s[i])){
                    v.eb(s[i]-'0');
                    ++i;
                }
                --i;
                for(int ii=0;ii<v2i(v);++ii){
                    for(int j=0;j<c.size();++j){
                        cout<<c[j];
                    }
                }
                c.clear();
            }
        }        
    }
    


}