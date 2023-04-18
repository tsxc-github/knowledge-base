#include <bits/stdc++.h>
using namespace std;
#define LL long long
const LL MOD = 100000000;  // 10^8

bool contiguous(LL x) {
    return x & (x << 1);
}

LL addbit(LL x, LL bit) {
    return x | (1 << bit);
}

LL delbit(LL x, LL bit) {
    return x & (~((1) << bit));
}

bool inquireBit(LL x, LL bit) {
    return x & (1 << bit);
}

LL bitcount(LL x) {
    return __builtin_popcount(x);
}

bool compatible(LL x, LL y) {
    if(((x << 1) & x) || ((x >> 1) & x))
        return false;
    if(((x << 2) & x) || ((x >> 2) & x))
        return false;
    if(((y << 1) & y) || ((y >> 1) & y))
        return false;
    if(((y << 2) & y) || ((y >> 2) & y))
        return false;
    if((x & y) != 0)  // 相同位置
        return false;
    return true;
}

int main() {
    LL n, m;
    cin >> n >> m;

    LL hill[n + 1];
    for(LL i = 0; i < n; i++) {
        LL t = 0;
        for(LL j = 0; j < m; j++) {
            char c;
            cin >> c;
            if(c == 'P') {
                t <<= 1;
                t += 1;
            }
            else if(c == 'H') {
                t <<= 1;
                t += 0;
            }
        }
        hill[i] = t;
    }

    LL t = 3;
    // dp[i][j][k]代表在第i行的状态j上一行状态为k时最多总共放的步兵数
    LL dp[t][1 << m][1 << m] = {};
    for(LL j = 0; j < (1 << m); j++) {
        if((j & hill[0]) != j)
            continue;
        dp[0 % 3][j][0] = bitcount(j);
    }

    for(LL j = 0; j < (1 << m); j++) {
        if((j & hill[1]) != j)
            continue;
        for(LL k = 0; k < (1 << m); k++) {
            if((k & hill[0]) != k)
                continue;
            if(compatible(j, k) == false)
                continue;
            dp[1][j][k] = bitcount(j) + bitcount(k);
        }
    }

    for(LL i = 2; i < n; i++) {
        for(LL j = 0; j < (1 << m); j++) {
            if((j & hill[i]) != j)
                continue;
            for(LL k = 0; k < (1 << m); k++) {
                if((k & hill[i - 1]) != k)
                    continue;
                if(compatible(j, k) == false)
                    continue;
                for(LL s = 0; s < (1 << m); s++) {
                    if((s & hill[i - 2]) != s)
                        continue;
                    if(compatible(k, s) == false)
                        continue;
                    if(compatible(j, s) == false)
                        continue;
                    dp[i%3][j][k] = max(dp[(i - 1) % 3][k][s] + bitcount(j),
                                      dp[i % 3][j][k]);
                }
            }
        }
    }
    LL ans = 0;
    for(LL j = 0; j < (1 << m); j++)
        for(LL k = 0; k < (1 << m); k++) {
            ans = max(dp[(n - 1) % 3][j][k], ans);
        }
    cout << ans;
    return 0;
}
