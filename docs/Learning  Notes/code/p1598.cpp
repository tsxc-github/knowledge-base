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
map<char,LL>c;
int main(){
    char temp;
    for(LL i=1;i<=4;i++){
        while(cin>>temp)c[temp]++;}
    //找到c中最大的值
    LL max=0;
    for(LL i='A';i<='Z';i++){
        if(c[i]>max){
            max=c[i];
        }
    }
    for(LL i=max;i>0;i--){
        for(LL j='A';j<='Z';j++){
            if(c[j]>=i){
                printf("*");
            }
            else{
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
}
