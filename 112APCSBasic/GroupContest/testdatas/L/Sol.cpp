#include <bits/stdc++.h>
using namespace std;

using vec = vector<long long>;
using mer = vector<vec>;

mer operator*(mer a,mer b){
    mer ret(a.size(), vec(b[0].size()));
    for(int i=0;i<a.size();++i){
        for(int j=0;j<b[0].size();++j){
            for(int k=0;k<a[0].size();++k){
                ret[i][j]=(ret[i][j]+a[i][k]*b[k][j]);
            }
        }
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    mer x(a, vec(b)), y(b, vec(c));

    for(auto &i : x) {
        for(auto &j : i) cin >> j;
    }

    for(auto &i : y) {
        for(auto &j : i) cin >> j;
    }

    mer ret = x * y;
    for(auto &i : ret) {
        for(auto &j : i) cout << j << " ";
        cout << "\n";
    }
}