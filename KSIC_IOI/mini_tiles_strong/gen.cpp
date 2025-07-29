#include <bits/stdc++.h>
using namespace std;

int ans;
string in_name, out_name;

int find_max_edge(int x){
    int ans=1;
    while((ans<<1)<=x){
        ans<<=1;
    }
    return ans;
}

void cut_max(int n, int m){
//    cout<<n<<" "<<m<<'\n';
    //n<m
    if(n>m)swap(n, m);
    if(!n)return;
    if(n==1 or m==1){
        ans+=m;
        return;
    }
    ++ans;

    int x=find_max_edge(n);
    cut_max(n-x, x);
    cut_max(m-x, n);
}

void sol(){
    ifstream fin(in_name);
    ofstream fout(out_name);
    int n, m;
    fin >>n>>m;
    ans=0;
    while(!(n & 1) and !(m & 1)){
        n>>=1, m>>=1;
    }
    cut_max(n, m);

    fout<<ans<<'\n';
    fin.close();
    fout.close();
}

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(2, 499);
    for (int i=0;i<15;++i) {
        ans=0;
        in_name=string("./2-minitiles-")+to_string(i)+".in";
        out_name=string("./2-minitiles-")+to_string(i)+".out";
        ofstream fout(in_name);
        int n=dis(gen), m=dis(gen);
        fout<<n<<" " <<m<<"\n";
        fout.close();
        sol();
    }
    return 0;
}