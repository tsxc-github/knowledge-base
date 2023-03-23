#include <bits/stdc++.h>
using namespace std;
#define LL long long

struct BinaryIndexTree
{
    LL n;
    LL* c = nullptr;

    LL Lowbit(LL x) {
        return x & (-x);
    }

    LL Compute(LL x) {
        LL ans = 0;
        while(x > 0) {
            ans += c[x];
            x -= Lowbit(x);
        }
        return ans;
    }

    LL Find(LL start, LL end) {
        return (Compute(end) - Compute(start - 1));
    }

    void Update(LL x, LL val) {
        while(x <= n) {
            c[x] += val;
            x += Lowbit(x);
        }
    }

    BinaryIndexTree(LL n) {
        this->n = n;
        c = new LL[n + 1];
        memset(c, 0, sizeof(LL) * (n + 1));
    }

    BinaryIndexTree(LL n, LL a[])
        : BinaryIndexTree(n) {}
};

void run() {
    const LL MOD = 99999997;
    LL n;
    cin >> n;
    struct Num
    {
        LL index;
        LL number;
    };
    Num a[n + 1];
    Num b[n + 1];
    for(LL i = 1; i <= n; i++) {
        cin >> a[i].number;
        a[i].index = i;
    }
    sort(a + 1, a + 1 + n, [](Num a, Num b) {
        if(a.number != b.number)
            return a.number < b.number;
        return a.index < b.index;
    });
    for(LL i = 1; i <= n; i++) {
        cin >> b[i].number;
        b[i].index = i;
    }
    sort(b + 1, b + 1 + n, [](Num a, Num b) {
        if(a.number != b.number)
            return a.number < b.number;
        return a.index < b.index;
    });
    LL al[n + 1];
    LL bl[n + 1];
    for(LL i = 1; i <= n; i++) {
        al[a[i].index] = i;
    }
    for(LL i = 1; i <= n; i++) {
        bl[b[i].index] = i;
    }
    LL c[n + 1];
    for(LL i = 1; i <= n; i++) {
        c[b[i].index] = a[i].index;
    }
    BinaryIndexTree BIT(n);
    LL ans = 0;
    for(LL i = 1; i <= n; i++) {
        BIT.Update(c[i], 1);
        ans += i - BIT.Compute(c[i]);
        ans %= MOD;
    }
    printf("%lld", ans);
    return;
}

int main() {
    try {
        run();
    }
    catch(const char* errorInformation) {
        cout << endl << "ERROR:" << errorInformation << endl;
        return 0;
    }
}