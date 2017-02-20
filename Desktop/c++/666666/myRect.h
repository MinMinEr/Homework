#include<iostream>
using namespace std ;
//不带参数宏替换。在程序正文中，用3.1415926代替PI
#define PI  3.1415926
//带参数宏替换。在程序正文中，PI*r*r代替area(x)，r是参数
#define area(r)  PI*r*r   
int main()
{ double x, s;
  x=3.6;
  s=area(x);
  cout<<"s="<<s<<endl;
}
