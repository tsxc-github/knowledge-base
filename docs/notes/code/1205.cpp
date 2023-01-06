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
void hanio(int n,char a,char b,char c){
    if(n==1){
        printf("%c->%d->%c\n",a,n,c);
        return;
    }
    hanio(n-1,a,c,b);
    printf("%c->%d->%c\n",a,n,c);
    hanio(n-1,b,a,c);
    return;
}
int main(){
    int n;
    char a,b,c;
    cin>>n>>a>>c>>b;
    hanio(n,a,b,c);
    return 0;
}
