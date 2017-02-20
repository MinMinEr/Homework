#include<iostream>
using namespace std;
struct point{
	double x;
	double y;
};
void change(point* ,point*);
int main(){
	point a,b;
	a.x=1;
	a.y = 2;
	b.x = 3;
	b.y = 4;
    change(&a,&b);
	cout<<"a"<<a.x<<","<<a.y<<endl;
	cout<<"b"<<b.x<<","<<b.y<<endl;
}

void change(point* c,point *d){
	point e;
	e = *c;
	*c = *d;
	*d = e;
	cout<<c->x<<c->y<<endl<<d->x<<d->y<<endl;
}

