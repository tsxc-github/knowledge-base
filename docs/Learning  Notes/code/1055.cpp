#include<iostream>
#include<cstdio>
using namespace std;

bool panduan(int i){
    if(i%4==0){
    if(i%100==0){
    if(i%400==0)return true;
    else return false;}
    else return true;}
    else return false;}
int main(){
    int a;
    cin>>a;
    if(panduan(a))cout<<'Y';
    else cout<<'N';     
}
