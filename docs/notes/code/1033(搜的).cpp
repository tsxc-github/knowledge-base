#include<iostream>  
#include<cmath>  
#include<stdio.h>
using namespace std;  
  
class Point{  
private:  
    double x,y;  
public:  
    Point(double x,double y)  
    {  
        this->x = x;  
        this->y = y;  
    }  
    double Getx()  
    {  
        return x;  
    }  
    double Gety()  
    {  
        return y;  
    }  
      
    double Distance(const Point &p)  //定义拷贝构造函数  
    {  
        x -= p.x;  
        y -= p.y;  
        return sqrt(x*x+y*y);  
    }  
    void ShowPoint()  
    {  
        cout << "<" << Getx() << "," << Gety() << ">" << endl;  
    }  
};  
  
int main()  
{  
    double x1,y1,x2,y2;  
    double x;

    cin >> x1 >> y1 >> x2 >> y2;  
    Point P1(x1,y1);  
    Point P2(x2,y2);  

      x=P1.Distance(P2);
      cout.precision(3);
      cout.setf(ios::fixed);
    cout << x << endl;  
    
    return 0;  
}
