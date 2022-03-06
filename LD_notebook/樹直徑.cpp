#include<bits/stdc++.h>
#define ll long long
#define N 1000005
#define pii pair<int,int>
#define f first
#define s second
#define eb emplace_back
#define m_p make_pair
#define WA ios::sync_with_stdio(0),cin.tie(0)
using namespace std;

vector<pii> v[N];
vector<int> v1[N];
int len[N],tmp[N],root,mxn;

struct ch{
    int num;
    int pt;
};

ch childs[N]={0};

bool cmp(ch x,ch y){
    return x.num<y.num;
}

void gain_childs(int pt){
//    cout<<pt<<" ";
    childs[pt].num++; 

//    if(pt==root)return;
    int t=v1[pt].size();
    for(int i=1;i<=t;++i)
        gain_childs(v1[pt][0]);
    
    
}

int main(){
	int n;
    int a,b,w;

    cin >>n;
    for(int i=1;i<n;++i){
        cin >>a>>b>>w;
        v[a].eb(m_p(b,w));
        v1[b].eb(a);
        tmp[a]=1;
    }

    for(int i=1;i<=n;++i){
        if(tmp[i]==0)root=i;
        len[i]=1;
    }
    for(int i=1;i<=n;++i){
    //    cout<<i<<'\n';
        gain_childs(i);
        childs[i].num--;
        childs[i].pt=i;
    }
    
    sort(childs+1,childs+1+n,cmp);
    for(int i=1;i<=n;++i){
        cout<<childs[i].pt<<" ";
    }
/*    
        for(int i=1;i<=n;++i){
            cout<<i<<":";
            for(int j=0;j<v1[i].size();++j){
                cout<<v1[i][j]<<" ";
            } 
            cout<<'\n';
        }

    for(int i=1;i<=n;++i)cout<<childs[i]<<" ";
*/
    

    
	return 0;
}

/*
14
1 2 1 
1 6 1
2 3 1
2 4 1
2 5 1
6 7 1
6 8 1
7 9 1
7 10 1
10 11 1
10 12 1
10 13 1
10 14 1

*/


