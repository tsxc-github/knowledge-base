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
    LL n;
    unsigned short a[101]={};
    string x[11][7]={{"XXX","X.X","X.X","X.X","XXX"},{"..X","..X","..X","..X","..X"},{"XXX","..X","XXX","X..","XXX"},{"XXX","..X","XXX","..X","XXX"},{"X.X","X.X","XXX","..X","..X"},{"XXX","X..","XXX","..X","XXX"},{"XXX","X..","XXX","X.X","XXX"},{"XXX","..X","..X","..X","..X"},{"XXX","X.X","XXX","X.X","XXX"},{"XXX","X.X","XXX","..X","XXX"}};
    cin>>n;
    getchar();
    for(LL i=0;i<n;i++)
        a[i]=getchar()-48;
    for(LL j=0;j<5;j++){
        for(LL i=0;i<n;i++){
            cout<<x[a[i]][j]<<'.';
        }
        cout<<endl;
    }
}
