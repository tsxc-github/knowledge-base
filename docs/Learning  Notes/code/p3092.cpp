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

    LL a[n];
    for(LL i = 0; i < n; i++) {
        cin >> a[i];
    }

    LL ans = 0;
    for(LL i = 0; i < (1 << n); i++) {
        if(bitcount(i) != n - m)
            continue;
        bitset< 8888 > killer;
        killer[0] = true;
        for(LL j = 0; j < n; j++) {
            if(((1 << j) & i)) {
                killer |= killer<<a[j];
            }
        }
        ans = max(ans, (LL)killer.count());
    }
    cout << ans-1;
    return 0;
}
