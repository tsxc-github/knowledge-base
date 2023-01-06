#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#include<ctime>
#include<random>
typedef long long LL;
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 20
struct dian{
    LL v;
    LL num;
};
LL n;
double ans=1e16;
dian a[MAX][MAX];
double v[MAX];
void dfs(dian a,double now=0,LL ceng=0){
    if(now>=ans)return;
    if(ceng>n){
        ans=min(ans,now); 
        return;}
    if(clock()>=0.97*CLOCKS_PER_SEC){
        printf("%.2lf",ans);
        exit(0);}
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    
    dfs();
    printf("%.2lf",ans);
    return 0;
}