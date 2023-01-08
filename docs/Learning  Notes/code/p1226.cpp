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
LL mod_quickly(LL a,LL b,LL p)
{
    LL answer=1;
    LL temp=a%p;
    while(b!=0){
        if(b&1)
            answer=(answer*temp)%p;
        b=b>>1;
        temp=(temp*temp)%p;
    }
    return answer;
}
int main()
{
    LL a,b,p;
    cin>>a>>b>>p;
    printf("%ld^%ld mod %ld=%ld",a,b,p,mod_quickly(a,b,p));
    return 0;
}
