#include<bits/stdc++.h>
using namespace std;

int t,n,k,m,x;
int arr[1000005];
bitset<200005> exist;
string s;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>t;int name=1;
    while(t--){
        cout<<"line #"<<name<<'\n';
        queue<int> q[1005],qt;
        cin >>n;int tn;
        for(int i=1;i<=n;++i){
            cin >>tn;
            while(tn--)cin >>x,arr[x]=i;
        }
        cin >>m;cin.ignore();
        for(int i=0;i<m;++i){
            cin >>s;
            if(s[0]=='E'){
                cin >>x;
                int id=arr[x];
                if(exist[id]){
                    q[id].push(x);
                }else if(!arr[id]){
                    qt.push(x);
                }
                else{
                    qt.push(id);
                    q[id].push(x);
                    exist[id]=1;
                }
            }else if(s[0]=='D'){
                int fr=qt.front();
                if(arr[fr]){cout<<q[fr].front()<<'\n';
                q[fr].pop();}
                else {cout<<qt.front()<<'\n';qt.pop();}
                if(arr[fr] && q[fr].empty())exist[fr]=0,qt.pop();
            }
        }
        ++name;
    }
}