#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#include<queue>
#include<vector>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
LL f[MAX][MAX][MAX];
LL w(LL a,LL b,LL c){
    if(a<=0||b<=0||c<=0)return 1;
    if(a>20||b>20||c>20)return w(20,20,20);
    if(f[a][b][c]!=-1)return f[a][b][c];
    if(a<b&&b<c)return f[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
    return f[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    memset(f,-1,sizeof(f));
    while(true){
        LL a,b,c;
        cin>>a>>b>>c;
        if(a==-1&&b==-1&&c==-1)break;
        printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));}
    return 0;
    
}
