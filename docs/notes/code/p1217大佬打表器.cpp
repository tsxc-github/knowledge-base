#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
const int N=300000001;
int P[N],a,b,ans,sum;
bool Isp[N];
void Euler(int x){//欧拉筛法
    for(int i=2;i<=x;i++){
        if(Isp[i]) P[++P[0]]=i;
        for(int j=1;i*P[j]<=x && j<=P[0];j++){
            Isp[i*P[j]]=false;
            if(i%P[j]==0) break;
        }
    }
}
bool hw(int x)
{
    int x2=x,y=0;
    while (x2!=0)
    {
        y=y*10+x2%10;
        x2/=10;
    } 
    if (x==y) return true;
    else return false;
}
int main()
{
    FILE *out;
    out=freopen("p1217.txt","w",stdout);
    memset(Isp,true,sizeof(Isp));Isp[1]=0;
    scanf("%d %d",&a,&b);
    Euler(b);
    for(int i=a;i<=b;i++)
        if(hw(i) && Isp[i]){
            printf("%d,",i);
            sum++;
            
        }
    printf("\n%d",sum);
    fclose(out);
    return 0;
}