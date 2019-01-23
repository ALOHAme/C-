#include<string>
using namespace std;
class Employee
{
public:
	Employee(int,string,int);
	void setEmployeeRank(int);
	void setEmployeeName(string);
	void setYearlySalary(int);
	string getEmployeeName();
	int getYearlySalary();
	int getEmployeeRank();
	void displayMessage();
private:
	int rank;
	int yearlySalary;
	string employeeName;
};