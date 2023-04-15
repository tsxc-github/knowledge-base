#include <bits/stdc++.h>
using namespace std;
#define LL long long
const LL LEAST = 1e10;
int main() {
#ifndef ONLINE_JUDGE
    freopen("P2471_3.in", "r", stdin);
    freopen("P2471.out", "w", stdout);
#endif
    LL n, m;
    cin >> n;
    map< LL, LL > a;
    LL year[n + 2];
    LL r[n + 2] = {};
    for(LL i = 1; i <= n; i++) {
        LL x, y;
        cin >> x >> y;
        a[x] = i;
        r[i] = y;
        year[i] = x;
    }
    year[n + 1] = LEAST;
    a[LEAST] = n + 1;
    cin >> m;
    for(LL k = 1; k <= m; k++) {
        bool finish = false;
        LL inx, iny;
        cin >> iny >> inx;

        LL x = a[inx];
        LL y = a[iny];

        if(r[x] != 0 && r[y] != 0) {
            if(iny > inx) {
                printf("false\n");
                continue;
            }
            if(r[x] > r[y]) {
                printf("false\n");
                continue;
            }
            bool all = false;
            if(x - y == inx - iny) {
                all = true;
            }
            for(LL i = y + 1; i < x; i++) {
                if(r[i] >= r[x]) {
                    printf("false\n");
                    finish = true;
                    break;
                }
            }
            if(finish == true)
                continue;
            if(all == true) {
                printf("true\n");
                continue;
            }
            printf("maybe\n");
            continue;
        }

        if(r[y] != 0) {
            x = a[*upper_bound(year + 1, year + 2 + n, inx)];

            for(LL i = y + 1; i < x; i++) {
                if(r[i] >= r[y]) {
                    printf("false\n");
                    finish = true;
                    break;
                }
            }
            if(finish == true)
                continue;
            printf("maybe\n");
            continue;
        }

        if(r[x] != 0) {
            LL y = a[*upper_bound(year + 1, year + 2 + n, iny)];
            for(LL i = y; i < x; i++) {
                if(r[i] >= r[x]) {
                    printf("false\n");
                    finish = true;
                    break;
                }
            }
            if(finish == true)
                continue;
            printf("maybe\n");
            continue;
        }

        if(r[x] == 0 && r[y] == 0) {
            printf("maybe\n");
            continue;
        }
    }
    return 0;
}