#include<bits/stdc++.h>
using namespace std;

int t,n,k,m,x;
int arr[1000005],exist[1005];
string s;

int main(){
    cin >>t;int name=1;
    while(t--){
        cout<<"line #"<<name<<'\n';
        queue<int> q[1000],qt;
        fill(exist,exist+1005,0);
        cin >>n;int tn;
        for(int i=0;i<n;++i){
            cin >>tn;
            while(tn--)cin >>x,arr[x]=i;
        }
        cin >>m;cin.ignore();
        for(int i=0;i<m;++i){
            cin >>s;cout<<"This is ... "<<s<<" ...string\n";
            if(s[0]=='E'){
                cout<<"EEEEEE\n";
                x=s[s.size()-1]-'0';
                int id=arr[x];
                if(exist[id]){
                    q[id].push(x);
                }else{
                    qt.push(id);
                }
            }else if(s[0]=="D"){
                int fr=qt.front();
                cout<<"OOOOO)"<<q[fr].front()<<'\n';
                q[fr].pop();
                if(q[fr].empty())qt.pop();
            }
        }
        ++name;
    }
}