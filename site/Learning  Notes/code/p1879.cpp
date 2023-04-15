#include <bits/stdc++.h>
using namespace std;
#define LL long long
const LL MOD = 100000000;  // 10^8

bool contiguous(LL x) {
    return x & (x << 1);
}

int main() {
    LL n, m;
    cin >> m >> n;

    LL grow[m];
    for(LL i = 0; i < m; i++) {
        LL t = 0;
        for(LL j = 0; j < n; j++) {
            LL temp;
            cin >> temp;
            t <<= 1;
            t += temp;
        }
        grow[i] = t;
    }

    // dp[i][j]:行数为i,状态为j时的方案数
    LL dp[m + 1][(1 << (n + 1))] = {};
    for(LL j = 0; j < (1 << n); j++) {
        if((grow[0] & j) != j)
            continue;
        dp[0][j] = 1;
    }
    // dp[0][0] = 1;

    for(LL i = 1; i <= m; i++) {
        for(LL j = 0; j < (1 << n); j++) {
            if((grow[i] & j) != j || contiguous(j) == true)
                continue;
            for(LL k = 0; k < (1 << n); k++) {
                if((j & k) == 0 && contiguous(k) == false &&
                   (grow[i - 1] & k) == k) {
                    dp[i][j] = dp[i][j] + dp[i - 1][k];
                    dp[i][j] %= MOD;
                }
            }
        }
    }

    LL ans = 0;
    for(LL i = 0; i < (1 << n); i++) {
        ans += dp[m][i];
        ans %= MOD;
    }
    cout << ans;
    return 0;
}