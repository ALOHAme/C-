#include<iostream>
#include"Date.h";
using namespace std;

Date::Date(int  month, int day, int year )
{
	setMonth(month);
	setDay(day);
	setYear(year);
}

void Date::setMonth(int month)
{
	Month = month;
}
void Date::setDay(int day)
{
	Day = day;
}
void Date::setYear(int year)
{
	Year = year;
}


int Date::getMonth()
{
	return Month;
}

int Date::getDay()
{
	return Day;
}

int Date::getYear()
{
	return Year;
}

void Date::displayDate()
{
	cout << Month << "/" << Day << "/" << Year;
}
