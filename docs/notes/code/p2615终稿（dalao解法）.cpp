#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
int main(){
    short n,a[40][40]={},x,y;
    cin>>n;
    x=1;
    y=(n+1)/2;  
    for(short i=1;i<=n;i++){
        for(short j=1;j<=n;j++)
            printf("%d ",(int)a[i][j]);
        printf("\n");
    }
}
