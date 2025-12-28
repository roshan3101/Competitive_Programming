#include <bits/stdc++.h>
using namespace std;

static const int MOD = 1000000007;

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

    for (int x = 1; x <= n; x++) {
        dp[1][x] = 1;
    }

    for (int len = 2; len <= k; len++) {
        for (int y = 1; y <= n; y++) {
            if (dp[len - 1][y] == 0) continue;
            for (int x = y; x <= n; x += y) {
                dp[len][x] = (dp[len][x] + dp[len - 1][y]) % MOD;
            }
        }
    }

    long long ans = 0;
    for (int x = 1; x <= n; x++) {
        ans = (ans + dp[k][x]) % MOD;
    }

    cout << ans << "\n";
    return 0;
}
