#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
using namespace std;
void BubbleSort_Recursion(int array[], int nLength_, Comp CompFunc)
{
    if (array == nullptr || nLength_ <= 1 || CompFunc == nullptr)
        return;

     // 从数组尾部向前，对不符合要求的元素进行两两交换，从而使数组头部的元素为最小或最大
     for (int i = nLength_ - 1; i > 0;  --i)
     {
          if (!CompFunc(array[i-1], array[i]))
         {
              swap(array[i-1], array[i]);
          }
      }

       // 对数组剩余的元素进行递归操作
      BubbleSort_Recursion(array + 1, nLength_ - 1, CompFunc); }
int main(){
    long long *list,a,b;
    bool temp=true;
    cin>>a;
    if(a==1){cin>>a;cout<<a;return 0;}
    list=new long long [a]();
    for(long long i=0;i<a;i++){
        cin>>list[i];
    }
    sort(list,list+a-1);
    for(long long i=0;i<a;i++){
        printf("%ld\n",list[i]);
    }
    return 0;
}
