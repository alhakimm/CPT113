/*
-month
-day
-year
-monthName[]

Date()
+setday : int void
+setmonth : int void
+setyear : int void

+displayFormat1()
+displayFormat2()
+displayFormat3()
*/

#include<iostream>
using namespace std;


class Date
{
	private:
		int month;
		int day;
		int year;
		string monthName[12]={"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
		
	public:
		Date();
		void setday(int);     //MUTATOR
		void setmonth(int);
		void setyear(int);
		
		void display1() const; //ACCESSOR
		void display2() const;
		void display3() const;
};                            // ; IS A MUST

Date::Date(){
	year=0;
	month=0;
	day=0;
}

void Date::setday(int d)
{
	day = d;
}

void Date::setmonth(int m)
{
	month = m;
}

void Date::setyear(int y)
{
	year = y;
}

void Date::display1() const
{
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}

void Date::display2() const
{
	cout<<monthName[month-1]<<" "<<day<<","<<year<<endl;
}
void Date::display3() const
{
	cout<<day<<" "<<monthName[month-1]<<" "<<year<<endl;
}


int main()
{
	int x;      //TAKYAH BYK2 SBB NNT REPEAT JE PAKAI X TU HEHE
	Date o;     //o NI OBJ UTK DATE
	
	cout<<"Day : ";
	cin>>x;
	while((x<1)||(x>31))
	{
		cout<<"valid only for 1 until 31"<<endl;
		cout<<"Day : ";
		cin>>x;
	}
	o.setday(x);           //PASS VALUE TO FUNCTION MEMBER
	
	cout<<"Month : ";
	cin>>x;
	while((x<1)||(x>12))
	{
		cout<<"valid only for 1 until 12"<<endl;
		cout<<"Month : ";
		cin>>x;
	}
	o.setmonth(x);
	
	cout<<"Year : ";
	cin>>x;
	o.setyear(x);
	
	cout<<endl;
	
	o.display1();  // UTK PAKAI DISPLAY FUNCTION
	o.display2();
	o.display3();
	
	return 0;
}

















