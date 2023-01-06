#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<vector>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
const LL MAX=1000;
unsigned short tu[MAX][MAX];

int main(){
    LL n,m;
    cin>>n>>m;
    unsigned short x,y,z;
    for(LL i=0;i<m;i++){
        cin>>x>>y>>z;
        tu[x][y]=z;
    }
    
}
