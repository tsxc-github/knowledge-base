#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#include<queue>
#include<vector>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
struct rode{
    LL left,right;
};
bool cmp(rode a,rode b){
    return a.left-a.right>b.left-b.right;}
int main(){
    LL l,n,k,temp;
    vector<rode> a;
    cin>>l>>n>>k;
    cin>>temp;
    a.push_back({0,temp});
    for(LL i=1;i<n;i++){
        LL now;
        cin>>now;
        a.push_back({temp,now});
        temp=now;}
    a.push_back({temp,l});
    sort(a.begin(),a.end(),cmp);
    for(LL i=0;i<k;i++){
        LL mid=(a[a.size()-1].left+a[a.size()-1].right)/2;
        rode temp1={a[a.size()-1].left,mid};
        rode temp2={mid,a[a.size()-1].right};
        a.pop_back();
        a.push_back(temp1);
        a.push_back(temp2);
        sort(a.begin(),a.end(),cmp);}
    printf("%lld",a[a.size()-1].right-a[a.size()-1].left);
    return 0;
    
}
