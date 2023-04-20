#include <bits/stdc++.h>
using namespace std;
#define LL long long

int main() {
    LL n;
    cin >> n;
    struct rode
    {
        LL a, b, c;
    };

    vector< rode > a(n + 1);
    vector< vector< LL > > to(n + 1);

    for(LL i = 1; i < n; i++) {
        cin >> a[i].a >> a[i].b >> a[i].c;
        to[a[i].a].push_back(a[i].b);
        to[a[i].b].push_back(a[i].a);
    }

    LL root = 1;
    vector< bool > vis(n + 1, false);
    vector< LL > father(n + 1, 0);
    vector< LL > sons(n + 1, 1);
    function< void(LL) > dfs = [&](LL p) -> void {
        if(vis[p] == true)
            return;
        vis[p] = true;
        for(auto i : to[p]) {
            if(vis[i] != true) {
                dfs(i);
                father[i] = p;
                sons[p] += sons[i];
            }
        }
    };

    dfs(root);

    LL ans = 0;
    for(LL i = 1; i < n; i++) {
        ans += a[i].c * (abs((n - min(sons[a[i].a], sons[a[i].b])) - min(sons[a[i].a], sons[a[i].b])));
    }
#ifndef ONLINE_JUDGE
    for(LL i = 1; i <= n; i++) {
        cout << sons[i] << ' ';
    }
    cout << endl;
#endif

    cout << ans;
    return 0;
}