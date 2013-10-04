#include<iostream>
#include<cmath>
#include<string>
#include<stdexcept>
using namespace std;
class Point{
private:
	float x;
	float y;
public:
	Point(float x=0,float y=0)
	{
		this->x=x;
		this->y=y;
	}
	Point(const Point&p)
	{
		this->x=p.x;
		this->y=p.y;
	}
	distance(const Point&p)
	{
		return sqrt((this->x-p.x)*(this->x-p.x)+(this->y-p.y)*(this->y-p.y))
	}
};
class Quadrangle{
private:
	Point a;
	Point b;
	Point c;
	Point d;
	float k1;
	float k2;
	float c1;
	float c2;
public:
	Quadrangle(const Point&p1,const Point&p2,const Point&p3,const Point&p4):a(p1),b(p2),c(p3),d(p4)
	{
		if(a.x-b.x==0&&c.x-d.x==0)
		{
			throw runtime_error("it is not a quagrangle");
		}
		else if(a.x-b.x==0)
		{
			if(c.x==0||d.x==0)
	            throw runtime_error("it is not a quagrangle");
		}
		else if(c.x-d.x==0)
		{
			if(a.x==0||b.x==0)
				throw runtime_error("it is not a quagrangle");
		}
		else
		{
		    this->k1=(a.y-b.y)/(a.x-b.x);
		    this->k2=(c.y-d.y)/(c.x-d.x);
		    this->c1=a.y-k1*a.x;
		    this->c2=c.y-k2*c.x;
		    if(k1==k2&&c1==c2)
				throw runtime_error("it is not a quagrangle");
		}
	}
	float getArea()
	{


	}



