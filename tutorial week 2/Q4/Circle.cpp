#include<iostream>
using namespace std;

class Circle
{
	private:
		double radius;
		double pi=3.14159;
		
	public:
		Circle()
		{
			radius = 0.0;
		}
		
		Circle(double r)
		{
			radius = r;
		}
		
		void setRadius(double r)
		{
			radius = r;
		}
		
		double getRadius()
		{
			return radius;
		}
		
		double getArea()
		{
			return pi*radius*radius;
		}
		
		double getDiameter()
		{
			return radius*2;
		}
		
		double getCircumference()
		{
			return 2*pi*radius;
		}
	
};


int main()
{
	Circle o;
	double f,g,h,j;
	
	cout<<"enter radius : ";
	cin>>f;
	o.setRadius(f);
	
	g=o.getArea();
	h=o.getDiameter();
	j=o.getCircumference();
	
	cout<<"Area: "<<g<<endl;
	cout<<"Diameter: "<<h<<endl;
	cout<<"Circumference: "<<j<<endl;
	
	return 0;
}
