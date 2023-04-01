#include <bits/stdc++.h>
using namespace std;
#define LL long long
int main() {
    LL n;
    cin >> n;
    LL r[n + 1];
    for(LL i = 1; i <= n; i++) {
        cin >> r[i];
    }
    LL zombie[n + 1] = {};
    LL killer[n + 1] = {};
    for(LL i = 1; i < n; i++) {
        LL a, b;
        cin >> a >> b;
        killer[b]++;
        zombie[a] = b;
    }
    LL dp[n + 1][2] = {};

    queue< LL > q;
    for(LL i = 1; i <= n; i++) {
        if(killer[i] == 0) {
            q.push(i);
        }
    }
    LL p;
    while(!q.empty()) {
        p = q.front();
        q.pop();
        dp[p][1] += r[p];
        killer[zombie[p]]--;
        if(killer[zombie[p]] == 0) {
            q.push(zombie[p]);
        }
        dp[zombie[p]][0] =
            max(dp[zombie[p]][0] + dp[p][0], dp[zombie[p]][0] + dp[p][1]);
        dp[zombie[p]][1] += max(dp[zombie[p]][1], dp[p][0]);
    }
    LL ans = 0;
    for(LL i = 0; i <= n; i++) {
        ans = max(ans, dp[i][1]);
        ans = max(ans, dp[i][0]);
    }

    cout << ans;
    return 0;
}