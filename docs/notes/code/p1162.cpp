#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
LL a[MAX][MAX];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,x;
    cin>>n;
    for(LL i=0;i<n;i++){
    for(LL j=0;j<n;j++){
    cin>>a[i][j];}}
    for(LL i=0;i<n;i++){
    for(LL j=0;j<n;j++){
    if(!a[i][j])
    a[i][j]=2;}}
    for(LL i=0;i<n;i++)
    if(a[i][0]!=1)
    a[i][0]=0;
    for(LL j=0;j<n;j++)
    if(a[0][j]!=1)
    a[0][j]=0;
    for(LL j=0;j<n;j++)
    if(a[n-1][j]!=1)
    a[n-1][j]=0;
    for(LL i=0;i<n;i++)
    if(a[i][n-1]!=1)
    a[i][n-1]=0;
    while(true){
    if(clocl)
    for(LL i=0;i<n;i++)
    for(LL j=0;j<n;j++)
    if(i>0&&j>0&&a[i][j]==2)
    if(!a[i-1][j]||!a[i+1][j]||!a[i][j+1]||!a[i][j-1])
    a[i][j]=0;}
    for(LL i=0;i<n;i++){
    for(LL j=0;j<n;j++){
    printf("%lld ",a[i][j]);}
    printf("\n");}
}
