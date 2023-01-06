#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float a,b;
char c;
int main()
{
    cin>>a>>c;
    if(c=='y'){
    
        if(a<=1000){
            cout<<8+5;
        }
        else{
            cout<<ceil((a-1000)/500)*4+8+5;

        }}
        else{
            if(a<=1000){
            cout<<8;
        }
        else{
            cout<<ceil((a-1000)/500)*4+8;
        }}
    return 0;
}