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
    LL m,t,s;
    cin>>m>>t>>s;
    if(t==0){
        cout<<0;
        return 0;
    }
    if(s/t>m){
        cout<<0;
        return 0;
    }
    
    cout<<m-ceil((LD)s/t);
}
 