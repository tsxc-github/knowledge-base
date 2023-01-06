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
    short n,x[40][40]={},y[2000][2]={};
    cin>>n;
    x[1][n/2+1]=1;
    y[1][0]=1;
    y[1][1]=n/2+1;
    short temp=n*n;
    for(short i=2;i<=temp;i++){
        if(y[i-1][0]==1&&y[i-1][1]!=n){
            x[n][y[i-1][1]+1]=i;
            y[i][0]=n;
            y[i][1]=y[i-1][1]+1;}
        if(y[i-1][0]!=1&&y[i-1][1]==n){
            x[y[i-1][0]-1][1]=i;
            y[i][0]=y[i-1][0]-1;
            y[i][1]=1;}
        if(y[i-1][0]==1&&y[i-1][1]==n){
            x[y[i-1][0]+1][y[i-1][1]]=i;
            y[i][0]=y[i-1][0]+1;
            y[i][1]=y[i-1][1];}
        if(y[i-1][0]!=1&&y[i-1][1]!=1&&x[y[i-1][0]-1][y[i-1][1]+1]==0){
            x[y[i-1][0]-1][y[i-1][1]+1]=i;
            y[i][0]=y[i-1][0]-1;
            y[i][1]=y[i-1][1]+1;}
        else{
            x[y[i-1][0]-1][y[i-1][1]]=i;
            y[i][0]=y[i-1][0]-1;
            y[i][1]=y[i-1][1];
        }
    }
    for(short i=1;i<=n;i++){
        for(short j=1;j<=n;j++)
            printf("%d ",(int)x[i][j]);
        printf("\n");
    }
}
