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
        for(LL i = 1; i <= n; i++) {
            LL temp;
            cin >> temp;
            Update(i, temp);
        }
    }
};

void run() {
    LL n, m;
    cin >> n >> m;
    BinaryIndexTree BIT(n);
    for(LL i = 0; i < m; i++) {
        LL operation;
        cin >> operation;
        LL x, y;
        switch(operation) {
            case 1:
                cin >> x >> y;
                BIT.Update(x, y);
                break;
            case 2:
                cin >> x >> y;
                printf("%lld\n", BIT.Find(x, y));
                break;
            default:
                throw "方法run()输入操作数错误";
        }
    }
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