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
    LL n;
    cin>>n;
    struct p5741{
        string name;
        LL chinese,math,english,总分;
    }student[1001];
    for(LL i=0;i<n;i++){
        cin>>student[i].name>>student[i].chinese>>student[i].math>>student[i].english;
        student[i].总分=student[i].chinese+student[i].math+student[i].english;}
    LL x[114514],y[114514],计数器=0;

    for(LL i=0;i<n;i++)
        for(LL j=i+1;j<=n;j++)
            if(student[j].总分-student[i].总分<=10&&student[j].总分-student[i].总分>=-10&&student[j].chinese-student[i].chinese<=5&&student[j].chinese-student[i].chinese>=-5&&student[j].math-student[i].math<=5&&student[j].math-student[i].math>=-5&&student[j].english-student[i].english<=5&&student[j].english-student[i].english>=-5){
                x[计数器]=i;
                y[计数器++]=j;
                if(x[计数器-1]>y[计数器-1])
                    swap(x[计数器-1],y[计数器-1]);
            }
    bool temp=true;
    while(temp){
        temp=false;
        for(LL i=1;i<计数器;i++){
            if(x[i-1]>x[i]){
                swap(x[i-1],x[i]);
                swap(y[i-1],y[i]);
                temp=true;
            }
    }}
    for(LL i=0;i<计数器;i++){
        cout<<student[x[i]].name<<' '<<student[y[i]].name<<endl;    
    }
        
}
