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
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a;
    getline(cin,a);
    if(a.find("\\r\\n")!=string::npos)
    cout<<"windows"<<endl;
    else
    if(a.find("\\n")!=string::npos)
    cout<<"linux"<<endl;
    else
    cout<<"mac"<<endl;
    return 0;
}
