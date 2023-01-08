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
LL a[114514];
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
    LL n,x;
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    for(LL i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
