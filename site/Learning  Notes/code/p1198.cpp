#include <bits/stdc++.h>
using namespace std;
#define LL long long

void run() {
    LL t = 0, m, d;
    cin >> m >> d;
    vector< LL > v;
    for(LL i = 0; i < m; i++) {
        char c;
        LL l;
        LL ans = 0;
        LL n;
        cin >> c;
        switch(c) {
            case 'Q':
                cin >> l;
                for(LL i = v.size()-l; i < v.size(); i++) {
                    ans = max(ans, v[i]);
                }
                t = ans;
                printf("%lld\n", ans);
                break;
            case 'A':
                cin >> n;
                v.push_back((n + t) % d);
                break;
        }
    }
    return;
}
int main() {
    try {
        run();
    }
    catch(const char* s) {
        cout << endl << "ERROR:" << s << endl;
        return 0;
    }
    return 0;
}
