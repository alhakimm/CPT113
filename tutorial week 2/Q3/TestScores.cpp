/*
test1
test2
test3

-TestScores()
-setTest1()
-setTest2()
-setTest3()

+average

*/


#include<iostream>
using namespace std;

class TestScores
{
	private:
		double test1,test2,test3;
		
	public:
		TestScores()            //CONSTRUCTOR
		{
			test1=0;
			test2=0;
			test3=0;
		}
		
		void settest1(double x)   //MUTATOR
		{
			test1=x;
		}
		void settest2(double x)
		{
			test2=x;
		}
		void settest3(double x)
		{
			test3=x;
		}
		
		double average()           //ACCESSOR
		{
			return (test1+test2+test3)/3;
		}
};

int main()
{
	double mark, average;
	TestScores m;
	
	cout<<"Test1 : ";
	cin>>mark;
	m.settest1(mark);
	cout<<endl;
	
	cout<<"Test2 : ";
	cin>>mark;
	m.settest2(mark);
	cout<<endl;
	
	cout<<"Test3 : ";
	cin>>mark;
	m.settest3(mark);
	cout<<endl;
	
	average=m.average();
	cout<<"average : "<<average;
	return 0;
}
