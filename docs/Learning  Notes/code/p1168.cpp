#include <bits/stdc++.h>
using namespace std;
#define LL long long

void run() {
#ifndef ONLINE_JUDGE
    freopen("P1168_1.in", "r", stdin);
    freopen("P1168.out", "w", stdout);
#endif
    LL n;
    cin >> n;
    if(n % 2 == 0)
        n--;
    multiset< LL > s;
    LL a;
    cin >> a;
    s.insert(a);
    auto it = s.find(a);
    printf("%lld\n", *it);
    for(LL i = 1; i < n; i += 2) {
        LL t1, t2;
        cin >> t1 >> t2;
        s.insert(t1);
        s.insert(t2);
        if(t1 >= *it && t2 >= *it) {
            it++;
        }
        if(t1 < *it && t2 < *it) {
            it--;
        }
        printf("%lld\n", *it);
    }
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
