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
};
class Triangle{
	private:
		Point a;
		Point b;
		Point c;
		float ab;
		float bc;
		float ac;
	public:
		Triangle(const Point&p1,const Point&p2,const Point&p3):a(p1),b(p2),c(p3)
	{
		this->ab=a.distance(b);
		this->ac=a.distance(c);
		this->bc=b.distance(c);
		if(ab+bc>ac&&ab+ac>bc&&ac+bc>ab)
		{
		}else{
			throw runtime_error("it is not a triangle");
		}
	}
		float getLenth()
		{
			return ab+bc+ac;
		}
		float getArea()
		{
			float p=this->getLenth()/2;
			return sqrt(p*(p-ab)*(p-ac)*(p-bc));
		}
};
int main(int argc,const char * argv[])
{
	float f,g,h,j,k,l;
	cin>>f>>g>>h>>j>>k>>l;
	Point a(f,g);
	Point b(h,j);
	Point c(k,l);
	try{
	    Triangle t(a,b,c);
		cout<<t.getLenth()<<endl;
		cout<<t.getArea()<<endl;
	}catch(runtime_error& message)
	{
		cout<<message.what()<<endl;
	}
	return 0;

}


			
			

	




		

		





