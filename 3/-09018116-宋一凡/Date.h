#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year,int month,int day);
	void setyear(int);
	void setmonth(int);
	void setday(int);
	int getday();
	int getmonth();
	int getyear();
	void displayDate();
private:
	int year;
	int month;
	int day;
};