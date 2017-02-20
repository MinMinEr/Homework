#include<iostream>
using namespace std;
class test
{   public:
         int x;
		 int y;
		 void print(){cout<<x<<'\t'<<y<<endl;}
};
int main(){
	test a;
	a.x = 1;
	a.y = 2;
	a.print()
		;
}

