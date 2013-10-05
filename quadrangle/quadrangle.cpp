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
	float distance(const Point&p)
	{
		return sqrt((this->x-p.x)*(this->x-p.x)+(this->y-p.y)*(this->y-p.y));
	}
	friend class Quadrangle;
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
	float ab;
	float bc;
	float ac;
	float cd;
	float da;
public:
	Quadrangle(const Point&p1,const Point&p2,const Point&p3,const Point&p4):a(p1),b(p2),c(p3),d(p4)
	{
		this->ab=a.distance(b);
		this->bc=b.distance(c);
		this->ac=a.distance(c);
		this->cd=c.distance(d);
		this->da=d.distance(a);
		if(a.x==b.x&&a.y==b.y||a.x==c.x&&a.y==c.y||a.x==d.x&&a.y==d.y||b.x==c.x&&b.y==c.y||b.x==d.x&&b.y==d.y||c.x==d.x&&c.y==d.y)
			throw runtime_error("it is not a quagrangle");
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
		    if(c.y==c.x*k1+c1||d.y==d.x*k1+c1||a.y==a.x*k2+c2||b.y==b.x*k2+c2)
				throw runtime_error("it is not a quagrangle");
		}
	}
	
	float getLenth()
	{
		return this->ab+this->bc+this->cd+this->da;
	}
	float getArea()
	{
		float p=(this->ab+this->bc+this->ac)/2;
		float p1=(this->cd+this->da+this->ac)/2;
		float area=sqrt(p*(p-this->ab)*(p-this->bc)*(p-this->ac))+sqrt(p1*(p1-this->cd)*(p1-this->da)*(p1-this->ac));
	    return area;
	}
};
int main(int argc,const char* argv[])
{
	int s,r,f,g,h,j,k,l;
	cout<<"please input point a,b,c,d in turn."<<endl;
	cin>>s>>r>>f>>g>>h>>j>>k>>l;
	Point a(s,r);
	Point b(f,g);
	Point c(h,j);
	Point d(k,l);
    try{
		Quadrangle t(a,b,c,d);
		cout<<"the area is "<<t.getArea()<<endl;
		cout<<"the perimeter is "<<t.getLenth()<<endl;
	}catch(runtime_error& message)
	{
		cout<<message.what()<<endl;
	}
	return 0;
}



