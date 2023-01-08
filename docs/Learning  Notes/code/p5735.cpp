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
double juli(double x1,double x2,double y1,double y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
int main(){
    double x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    printf("%.2lf",juli(x1,x2,y1,y2)+juli(x2,x3,y2,y3)+juli(x3,x1,y3,y1));
}
