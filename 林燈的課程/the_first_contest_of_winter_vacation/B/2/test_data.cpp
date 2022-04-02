#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct DSU{
    vector<int> dsu,rk;
    int n;
 
    DSU(int _n){
        n=_n;
        dsu.resize(n+10);//rs
        rk.resize(n+10);
        init(n+5);
    }
 
    void init(int n){
        for(int i=0;i<=n;i++){
            dsu[i]=i;
            rk[i]=1;
        }
    }
 
    int find(int a){
        if(dsu[a]==a)
            return a;
        return find(dsu[a]);
    }

    bool same(int a,int b){
        return find(a)==find(b);
    }

    void uni(int a,int b){
        if(same(a,b)) return;
        if(rk[find(a)]==rk[find(b)]){
            dsu[find(b)]=dsu[find(a)];
            rk[a]++;
        }else if(rk[find(a)]>rk[find(b)]){
            dsu[find(b)]=dsu[find(a)];
        }else{
            dsu[find(a)]=dsu[find(b)];
        }
    }
};

unsigned seed=chrono::steady_clock::now().time_since_epoch().count();
mt19937_64 gen=mt19937_64(seed);

long long RandomNumber(long long a,long long b){
    uniform_int_distribution<int> dis(a,b);
    return dis(gen);
}

long long RandomNumber(long long n){
    return RandomNumber(1,n);
}
 
ofstream Log("log.txt");
void SubTesk1(int a){
    string fileName="./TestData\\Test_";
    if(a<10) fileName+="0";
    fileName+=to_string(a);
 
    ofstream ques(fileName+".in"),ans(fileName+".out");
    Log<<"Test Data : "<<a+1<<"\n";
 
    int n=RandomNumber(100);
    int q=RandomNumber(100);
    ques<<n<<" "<<q<<"\n";
 
    ResetData();
 
    DSU dsu(n);
    vector<pii> es;
 
    clock_t startTime=clock();
    int testTime=0;
    while(es.size()<n-1){
        int f,t;
        f=RandomNumber(n);
        t=RandomNumber(n);
 
        testTime++;
        if(!dsu.same(f,t)){
            es.emplace_back(f,t);
            dsu.uni(f,t);
        }
    }
    clock_t finishTime=clock();
    Log<<"Finish generate tree in "<<finishTime-startTime<<" minisecond.\n";
 
    for(auto e:es){
        ques<<e.first<<" "<<e.second<<"\n";
        g[e.first].emplace_back(e.second);
        g[e.second].emplace_back(e.first);
    }
 
    tk=1;
    dfs(1,-1);
    link(1,1);
 
    for(int i=0;i<q;++i){
        int op=RandomNumber(2);
        ques<<op<<" ";
        if(op==1){// query
            int u,v=-1;
            u=RandomNumber(n);
            v=RandomNumber(n);
            ques<<u<<" "<<v;
            ans<<query(u,v)<<"\n";
        }else{// op==2 modfiy
            int u,x;
            u=RandomNumber(n);
            x=RandomNumber(1000);
            ques<<u<<" "<<x;
            modify(u,x);
        }
        ques<<"\n";
    }
 
    Log<<"\n\n";
    cout<<a+1<<endl;
}

int main(){
	SubTesk1(5);

}

