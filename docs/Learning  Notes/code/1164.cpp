#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
int main(){
    LL n;
    LL k;
    cin>>n>>k;
    cout<<to_string(n)[to_string(n).size()-k];
    return 0;
}
