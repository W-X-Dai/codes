#include<bits/stdc++.h>
using namespace std;

int ans;

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

int main(){
    for(int idx=0;idx<20;++idx){
        string in_name = "q625_" + (idx < 10 ? string("0") : "") + to_string(idx) + ".in";
        string out_name = "q625_" + std::string(idx<10 ? "0" : "") + to_string(idx) + ".out";
        ifstream fin(in_name);
        ofstream fout(out_name);
        int n,m;
        fin >> n >> m;
        ans = 0;
        // 取代cout為fout
        while(!(n & 1) and !(m & 1)){
            n>>=1, m>>=1;
        }
        // 暫存cout緩衝
        streambuf* backup = cout.rdbuf();
        cout.rdbuf(fout.rdbuf());
        cut_max(n, m);
        cout.rdbuf(backup);
        fout << ans << '\n';
        fin.close();
        fout.close();
    }
    return 0;
}