#include<iostream>
using namespace std;

const int TOTAL_EMPLOYEE=2;

class Payroll
{
	private:
		double payrate;
		double hours;
		
	public:
		Payroll()
		{
			payrate=0,hours=0;
		}
		
		void setPayrate(double p)
		{
			payrate=p;
		}
		
		void setHours(double h)
		{
			hours=h;
		}
		
		double getHours() const
		{
			return hours;
		}
		
		double getPayrate() const
		{
			return payrate;
		}
		
		double grosspay() const
		{
			return payrate*hours;
		}
};


int main()
{
	Payroll staff[TOTAL_EMPLOYEE];
	double x,y,z,c;
	
	for(int i=0;i<TOTAL_EMPLOYEE;i++)     //STORE DATA IN ARRAY
	{
		cout<<"Employee #"<<(i+1)<<endl;
		cout<<"payrate : ";
		cin>>x;
		staff[i].setPayrate(x);
		cout<<"hours : ";
		cin>>y;
		staff[i].setHours(y);
		cout<<endl;
	}
	
	for(int i=0;i<TOTAL_EMPLOYEE;i++)     //PRINT DATA IN ARRAY
	{
		cout<<"Employee #"<<(i+1)<<endl;
		cout<<"hour: "<<staff[i].getHours()<<endl;
		cout<<"grosspay: "<<staff[i].grosspay()<<endl<<endl;
	}
	
	
	return 0;
}
