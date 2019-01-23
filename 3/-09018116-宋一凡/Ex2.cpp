#include<iostream>
#include"Employee.h"
using namespace std;
int main(){
	Employee employee1(1,"Bob Jones",34500);
	employee1.displayMessage();
	Employee employee2(2,"Susan Baker",37800);
	employee2.displayMessage();
	cout<<"Increasing employee salaries by 10%"<<endl;
	employee1.setYearlySalary(37944);
	employee2.setYearlySalary(41580);
	employee1.displayMessage();
	employee2.displayMessage();
	return 0;
}