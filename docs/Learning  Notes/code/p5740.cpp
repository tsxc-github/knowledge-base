#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<cctype>
#define LL long long
#define LD long double
using namespace std;
int main(){
    LL n,x;
    cin>>n;
    struct p5740
    {
        string name;
        LL chinese,math,english,总分;
    }student[1001];
    for(LL i=0;i<n;i++){
        cin>>student[i].name>>student[i].chinese>>student[i].math>>student[i].english;
        student[i].总分=student[i].chinese+student[i].math+student[i].english;}
    LL max=0;
    for(LL i=1;i<n;i++){
        if(student[i].总分>student[max].总分)
            max=i;
    }
    cout<<student[max].name;
    printf(" %ld %ld %ld",student[max].chinese,student[max].math,student[max].english);
    return 0;
}
