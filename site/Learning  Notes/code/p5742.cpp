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
struct p5742
{
    LL xuehao;
    LL xueye;
    LL suzhi;
    double zongfen;
};
map<LL,p5742>a;
int main(){
    LL n,x;
    cin>>n;
    LL xuehao,xueye,suzhi;
    for(LL i=0;i<n;i++){
        cin>>xuehao>>xueye>>suzhi;
        if(xueye+suzhi>140&&!(xueye*0.7+suzhi*0.3<80))
        cout<<"Excellent"<<endl;
        else
        cout<<"Not excellent"<<endl;
    }
    return 0;
}
