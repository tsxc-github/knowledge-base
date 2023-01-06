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
    LL n,x=0;
    cin>>n;
    struct p5728{
        LL chinese,math,english,总分;
    }student[1001];
    for(LL i=0;i<n;i++){
        cin>>student[i].chinese>>student[i].math>>student[i].english;
        student[i].总分=student[i].chinese+student[i].math+student[i].english;}
    for(LL i=0;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(student[j].总分-student[i].总分<=10&&student[j].总分-student[i].总分>=-10&&student[j].chinese-student[i].chinese<=5&&student[j].chinese-student[i].chinese>=-5&&student[j].math-student[i].math<=5&&student[j].math-student[i].math>=-5&&student[j].english-student[i].english<=5&&student[j].english-student[i].english>=-5)
            x++;
    cout<<x;
}
