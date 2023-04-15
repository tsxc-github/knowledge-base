#include <bits/stdc++.h>
using namespace std;
#define LL long long
int main() {
    LL n, m;
    cin >> n >> m;
    m++;

    // dp[i][j]表示节点i，限重j的最大权值和（价值和）
    vector< vector< LL > > dp(n + 1, vector< LL >(m + 1, 0));

    vector< LL > son[n + 1];
    LL father[n + 1] = {};
    for(LL i = 1; i <= n; i++) {
        LL a, b;
        cin >> a >> b;
        father[i] = a;
        dp[i][1] = b;
        son[a].push_back(i);
    }

    function< void(LL) > dfs = [&](LL p) {
        for(auto i : son[p]) {
            dfs(i);
        }

        for(auto i : son[p]) {
            for(LL j = m; j > 0; j--) {
                for(LL k = 0; k < j; k++) {
                    dp[p][j] = max(dp[p][j - k], dp[i][k]);
                }
            }
        }
    };

    dfs(0);
    cout << dp[0][m];
    return 0;
}