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
LL a[114514],b[114514];
void quick_sort(LL a[],LL left,LL right){
    LL temp1=left;
    LL temp2=right;
    while(left<right){
    for(;right>left;right--)
        if(a[right]<a[temp1]){
            break;}
    for(;right>left;left++)
        if(a[left]>a[temp1]){
            break;}
    swap(a[left],a[right]);}
    swap(a[temp1],a[left]);
    if(temp1==left&&temp2==right)
        return;
    quick_sort(a,temp1,left-1);
    quick_sort(a,left+1,temp2);
    return;
}
int main(){
    LL n,x,i=0,j=0;
    n=10;
    std::ios::sync_with_stdio(false);
    for(LL k=0;k<n;k++){
        cin>>x;
        if(x%2)
            a[i++]=x;
        else
            b[j++]=x;
    }
    quick_sort(a,0,i-1);
    quick_sort(b,0,j-1);
    for(LL k=i-1;k>=0;k--){
        printf("%lld ",a[k]);
    }
    for(LL k=0;k<j;k++){
        printf("%lld ",b[k]);
    }
    return 0;
}
