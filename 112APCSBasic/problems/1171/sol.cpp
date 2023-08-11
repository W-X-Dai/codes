#include<bits/stdc++.h>
#define int long long
using namespace std;

int dp[100][100];

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < 100; ++i) {
        dp[i][0] = 1;
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j < n - i + 1; ++j) {
            cout << " ";
        }

        for(int j = 0; j < i; ++j) {
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
}