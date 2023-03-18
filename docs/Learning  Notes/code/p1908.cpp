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

    BinaryIndexTree(LL n, LL a[]):BinaryIndexTree(n) {
        
    }
};

void run() {
    LL n;
    cin >> n;
    struct Num
    {
        LL index;
        LL number;
    } inputNumbers[n + 1];
    for(LL i = 1; i <= n; i++) {
        cin >> inputNumbers[i].number;
        inputNumbers[i].index = i;
    }
    sort(inputNumbers + 1, inputNumbers + 1 + n, [](Num a, Num b) {
        if(a.number != b.number)
            return a.number < b.number;
        return a.index < b.index;
    });
    LL ranks[n + 1];
    for(LL i = 1; i <= n; i++){
        ranks[inputNumbers[i].number] = i;
    }
    BinaryIndexTree BIT(n);
    LL ans = 0;
    for(LL i = 1; i <= n; i++) {
        BIT.Update(ranks[i], 1);
        ans += i - BIT.Compute(ranks[i]);
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