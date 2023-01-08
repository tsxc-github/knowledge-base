#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;
long long b[4],c,d,n,x,y;
char a[5];
    
int main(){
    cin>>n;
    for(long long i=0;i<n;i++){
        scanf("%s",&a);
        b[0]=a[0]-48;
        b[1]=a[1]-48;
        b[2]=a[2]-48; 
        b[3]=a[3]-48;
        if(b[3]-b[0]-b[1]-b[2]>0)c+=1; 


    }
    cout<<c;
}
