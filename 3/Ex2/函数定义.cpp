#include<iostream>
#include"Ex2.h";
using namespace std;

Salary::Salary(int salaryone,int salarytwo,double Percentage)
{
	setSalary(salaryone, salarytwo);
	setPercentage(Percentage);
}

void Salary::setSalary(int salaryone,int salarytwo)
{
	 salary1 =salaryone;
	 salary2 = salarytwo;
}

void Salary::setPercentage(double Percentage)
{
	percentage = Percentage;
}

int Salary::getSalary1()
{
	return salary1;
}

int Salary::getSalary2()
{
	return salary2;
}

double Salary::getPercentage()
{
	return percentage;
}

void Salary::displayMessage()
{
	cout << "Employee 1:Bob Jones; Yearly Salary:" << getSalary1()*(1+getPercentage())
		 << "\n"
		 << "Employee 2:Susan Baker; Yearly Salary:" << getSalary2()*(1 + getPercentage())
		 << "\n";
}