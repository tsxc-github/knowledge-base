#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<cmath>
#include<cctype>
#include<map>
#include<queue>
#include<vector>
#define LL __int128
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
struct fenshu{
    LL fenmu;
    LL fenzi;
    fenshu(){
        fenmu=1;
        fenzi=0;
    }
    fenshu(LL a){
        fenmu=1;
        fenzi=a;
    }
    void yuefen(){
        LL g=__gcd(fenmu,fenzi);
        fenmu/=g;
        fenzi/=g;
    }
    fenshu operator/(const fenshu &b){
        fenshu t;
        t=*this;
        t.fenmu*=b.fenzi;
        t.fenzi*=b.fenmu;
        t.yuefen();
        return t;
    }
    void operator+=(const fenshu &x){
        LL a,b,c,d;
        a=fenzi;
        b=fenmu;
        c=x.fenmu;
        d=x.fenzi;
        fenmu=b*c;
        fenzi=a*c+b*d;
        yuefen();
    }
};
struct node{
    fenshu water=0;
    LL rd=0;
    vector<LL>v;
};
void read(__int128 &X){
    X = 0;
    int w=0; char ch=getchar();
    while(isdigit(ch)) X=(X<<3)+(X<<1)+(ch^48),ch=getchar();
    if (w) X = -X;
}
void print(__int128 x){
	if(x>9) print(x/10);
	putchar(x%10+'0');
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("p7113.out","w",stdout);
    LL n,m;
    read(n);
    read(m);
    node a[n+1];
    for(LL i=1;i<=n;i++){
        LL d;
        read(d);
        for(LL j=0;j<d;j++){
            LL temp;
            read(temp);
            a[i].v.push_back(temp);
            a[temp].rd++;
        }
    }
    queue<LL>q;
    for(LL i=1;i<=n;i++){
        if(a[i].rd==0){
            a[i].water=1;
            q.push(i);
        }
    }
    while(!q.empty()){
        LL p=q.front();
        q.pop();
        if(a[p].v.size()!=0){
            for(LL i=0;i<a[p].v.size();i++){
                a[a[p].v[i]].rd--;
                a[a[p].v[i]].water+=a[p].water/a[p].v.size();
                if(a[a[p].v[i]].rd==0){
                    q.push(a[p].v[i]);
                }
            }
            a[p].water=0;
        }
        
    }
    for(LL i=1;i<=n;i++){
        if(a[i].v.size()==0){
            print(a[i].water.fenzi);
            printf(" ");
            print(a[i].water.fenmu);
            printf("\n");
        }
    }
    return 0;
}
