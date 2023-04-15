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

int main() {
    LL n, m;
    cin >> n >> m;

    // dp[i][j][k]代表在第i行当前行状态为j总共放置的国王数为k的方案数
    LL dp[n + 1][1 << n][m + 1] = {};

    // for(LL i = 0; i < (1 << n); i++) {
    //     if(contiguous(i) == false)
    //         dp[0][i][bitcount(i)] = 1;
    // }
    dp[0][0][0] = 1;

    // 遍历每行i:
    for(LL i = 1; i <= n; i++) {
        // 	遍历每种状态j:
        for(LL j = 0; j < (1 << n); j++) {
            // 判断状态是否成立:{contiguous(j)==false}
            if(contiguous(j) == false) {
                // 遍历上一行状态s:
                for(LL s = 0; s < (1 << n); s++) {
                    // 判断状态是否成立:{
                    if(
                        //(j&s)==0相同位置,
                        (j & s) == 0 &&
                        //((j<<1)&s)==0左上右下,
                        ((j << 1) & s) == 0 &&
                        //(j&(s<<1))==0右上左下
                        (j & (s << 1)) == 0 && 
						contiguous(s) == false
                        // }
                    ) {
                        // 遍历国王数k=bitcount(j)<=m:
                        for(LL k = bitcount(j); k <= m; k++) {
                            // dp[i][j][k]+=dp[i-1][s][k-bitcount(j)];
                            dp[i][j][k] += dp[i - 1][s][k - bitcount(j)];
                        }
                    }
                }
            }
        }
    }
    LL ans = 0;
    for(LL i = 0; i < (1 << n); i++) {
        ans += dp[n][i][m];
    }
    cout << ans;

    return 0;
}
