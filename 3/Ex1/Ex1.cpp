#include<iostream>
#include<string>
#include"Ex1.h";
using namespace std;

int main()
{
	string NewName;

	GradeBook1 GradeBook11("CS101 Introduction to C++ Programming", "Sam Smith");

	GradeBook11.displayMessage();
	cout << "Changing instructor name to ";
	getline(cin, NewName);
	GradeBook11.SetInstructor(NewName);
	GradeBook11.displayMessage();

	system("pause");

}