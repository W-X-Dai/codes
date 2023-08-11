#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e6 + 5;

long long POW(long long a, long long x) {
    long long ret = 1;
    while(x > 0) {
        if(x & 1) ret = (ret * a) % MOD;
        x >>= 1;
        a = (a * a) % MOD;
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    long long a, b;
    cin >> a >> b;
    cout << POW(a, b) << "\n";
}