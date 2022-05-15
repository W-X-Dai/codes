#include<bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(),v.end()
using ll=long long;

unsigned seed=chrono::steady_clock::now().time_since_epoch().count();
mt19937_64 rng=mt19937_64(seed);

long long RandomNumber(long long a,long long b){
    uniform_int_distribution<long long> dis(a,b);
    return dis(rng);
}

long long RandomNumber(long long n){
    return RandomNumber(1,n);
}

void SubTesk1(int a){
    string fileName="a"+to_string(a);

    ofstream ques(fileName+".in"),ans(fileName+".out");

    int n=RandomNumber(90000,100000);
    ques<<n<<"\n";

    vector<long double> v(n);

    long double average=0;
    for(int i=0;i<n;++i){
        v[i]=RandomNumber(1000);
        average+=v[i];
        ques<<v[i]<<" ";
    }

    average/=n;

    long double sigma=0;

    for(int i=0;i<n;++i){
        v[i]-=average;
        sigma+=v[i]*v[i];
    }

    sigma=sqrtl(sigma/n);

    ans<<setprecision(10)<<sigma<<"\n";

    cout<<a<<endl;
}

#define REP(i,a,b) for(int i=(a);i<(b);++i)
int main(){
    ios::sync_with_stdio(0);cin.tie(0);

    clock_t startTime=clock();
    REP(i,1,20+1){
        SubTesk1(i);
    }
    clock_t endTime=clock();

    cout<<double(endTime-startTime)/1000<<"\n";
}