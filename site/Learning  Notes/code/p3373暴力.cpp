#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define Type LL
#define HowManyOperation 2
const LL MOD = 571373;

Type Read() {
    char ch = getchar();
    Type a = 0;
    while(ch < '0' || ch > '9'){
        ch = getchar();
    }
    while('0' <= ch && ch <= '9') {
        a *= 10;
        a += ch - '0';
        ch = getchar();
    }
    return a;
}
void Write(Type a) {
    if(a < 0) {
        putchar('-');
        a = -a;
    }
    if(a == 0)
        return;
    Write(a / 10);
    putchar(a % 10 + '0');
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("P3373_2.in", "r", stdin);
    // freopen("P3373.out", "w", stdout);
#endif
    LL n, m, mod;
    n = Read();
    m = Read();
    mod = Read();

    Type numbers[n];
    for(LL i = 0; i < n; i++) {
        LL temp = Read();
        numbers[i] = temp % MOD;
    }
    for(LL i = 0; i < m; i++) {
        LL temp = Read();
        LL x, y, k;
        switch(temp) {
            case 1:
                x = Read();
                y = Read();
                k = Read();
                for(LL i = x - 1; i <= y - 1; i++) {
                    numbers[i] *= k % MOD;
                    numbers[i] %= MOD;
                }
                break;
            case 2:
                x = Read();
                y = Read();
                k = Read();
                for(LL i = x - 1; i <= y - 1; i++) {
                    numbers[i] += k % MOD;
                    numbers[i] %= MOD;
                }
                break;
            case 3:
                x = Read();
                y = Read();
                LL ans = 0;
                for(LL i = x - 1; i <= y - 1; i++) {
                    ans += numbers[i];
                    ans %= MOD;
                }
                Write(ans % MOD);
                putchar('\n');
                break;
        }
    }
    return 0;
}
