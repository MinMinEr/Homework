#include<iostream>
using namespace std ;
//�����������滻���ڳ��������У���3.1415926����PI
#define PI  3.1415926
//���������滻���ڳ��������У�PI*r*r����area(x)��r�ǲ���
#define area(r)  PI*r*r   
int main()
{ double x, s;
  x=3.6;
  s=area(x);
  cout<<"s="<<s<<endl;
}
