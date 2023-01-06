#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#define LL long long
#define LD long double
using namespace std;
int main(){
    struct student{
        string name;
        LL qimo,banji,lunwen,jiangjin=0;
        char xuesheng,xibu;
    };
    LL n,x=-114514444,zongshu=0,z=0;
    cin>>n;
    student a[100];
    for(LL i=0;i<n;i++){
        cin>>a[i].name;
        cin>>a[i].qimo;
        cin>>a[i].banji;
        cin>>a[i].xuesheng;
        cin>>a[i].xibu;
        cin>>a[i].lunwen;
        }
    for(LL i=0;i<n;i++){
        if(a[i].qimo>80&&a[i].lunwen>=1){//院士
            a[i].jiangjin+=8000;
            zongshu+=8000;}
        if(a[i].qimo>85&&a[i].banji>80){//五四
            a[i].jiangjin+=4000;
            zongshu+=4000;}
        if(a[i].qimo>90){//成绩
            a[i].jiangjin+=2000;
            zongshu+=2000;}
        if(a[i].qimo>85&&a[i].xibu=='Y'){//西部
            a[i].jiangjin+=1000;
            zongshu+=1000;}
        if(a[i].qimo>80&&a[i].banji=='Y'){//班级
            a[i].jiangjin+=850;
            zongshu+=850;}
    }
    for(LL i=0;i<n;i++){
        if(a[i].jiangjin>a[z].jiangjin)
            z=i;
    }
    cout<<a[z].name<<endl<<a[z].jiangjin<<endl<<zongshu;
}
