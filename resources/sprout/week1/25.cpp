#include<bits/stdc++.h>
using namespace std;

int n,m;
string s;
queue<int> q[105];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>m>>n;
    for(int i=0;i<n;++i){
        cin >>s;cin.ignore();//cout<<s<<'\n';
        if(s[0]=='A'){
            int a,b;
            cin >>a>>b;
            q[a].push(b);
        }else if(s[0]=='L'){
            int x;
            cin >>x;
            if(q[x].empty())cout<<"queue "<<x<<" is empty!\n";
            else q[x].pop();
        }else if(s[0]=='J'){
            
            int a,b;
            cin >>a>>b;//cout<<"JJJJ"<<a<<b<<'\n';
            while(!q[a].empty()){
                q[b].push(q[a].front());
                q[a].pop();
            }
        }
    }
    for(int i=1;i<=m;++i){
        if(q[i].empty())cout<<"queue "<<i<<": empty!\n";
        else{
            cout<<"queue "<<i<<":";
            while(!q[i].empty()){  
                cout<<" "<<q[i].front();
                q[i].pop();
            }
            cout<<'\n';
        }
    }
}