//Point.h
#ifndef POINT_H
#define POINT_H
class Point
{ friend ostream&operator<<(ostream&.const Point &);
public:
	Point(int = 0,int = 0);
	void setPoint(int,int);
	int getX()const
	{return x;}
	int getY()const
	{return y;}
protected:
	int x,y;
};
Point::Point(int a,int b)
{  setPoint(a,b);}
void Point::setPoint(int a,int b)
{   x=a;y=b;}
ostream &operator<<(ostream &output,const Point &p)
{  output<<'['<<p.x<<','<<p.y<<"]";
  return output;
}
#endif
