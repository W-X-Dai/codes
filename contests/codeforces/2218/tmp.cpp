#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 5;
const int mod = 676767677;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<int> b(n);
        for (int i = 0; i < n; ++i) cin >> b[i];

        vector<int> cnt(m, 0), pre(m + 1, 0);
        for (int i = 0; i < n; ++i) {
            cnt[b[i]]++;
        }

        for (int t = 1; t <= m; ++t) {
            pre[t] = pre[t - 1] + cnt[t - 1];
        }

        int ans = 1;
        bool ok = true;

        for (int i = 0; i < n; ++i) {
            int t = b[i];

            if (t == 0) continue;  // a_i 必須是 0，只有 1 種

            int mn = (int)4e18;

            if (i - 1 >= 0) mn = min(mn, b[i - 1]);
            if (i + 1 < n) mn = min(mn, b[i + 1]);

            if (mn >= t) {
                ok = false;
                break;
            }

            int ways;
            if (mn == t - 1) {
                ways = pre[t];
            } else {
                ways = cnt[t - 1];
            }

            ans = ans * ways % mod;
        }

        cout << (ok ? ans : 0) << '\n';
    }

    return 0;
}