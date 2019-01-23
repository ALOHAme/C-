#pragma once
#include<string>
using namespace std;

class Salary
{
public:
	Salary(int, int, double);
	void setSalary(int,int);
	void setPercentage(double);
	int getSalary1();
	int getSalary2();
	double getPercentage();
	void displayMessage();
private:
	int salary1;
	int salary2;
	double percentage;
};