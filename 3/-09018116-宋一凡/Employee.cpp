#include<iostream>
#include"Employee.h"
using namespace std;
Employee::Employee(int ranking,string name,int number)
{
	setEmployeeRank(ranking);
	setEmployeeName(name);
	setYearlySalary(number);
}
void Employee::setEmployeeName(string name)
{
	employeeName=name;
}
void Employee::setYearlySalary(int number)
{
	yearlySalary=number;
}
void  Employee::setEmployeeRank(int ranking)
{
	rank=ranking;
}
string Employee::getEmployeeName()
{
	return employeeName;
}
int Employee::getYearlySalary()
{
	return yearlySalary;
}
int Employee::getEmployeeRank()
{
	return rank;
}
void Employee::displayMessage()
{
	cout<<"Employee "<<getEmployeeRank()<<":"<<getEmployeeName()<<";";
	cout<<"YearlySalary:"<<getYearlySalary()<<endl;
}
