#pragma once
#include<string>
using namespace std;

class GradeBook1
{
public:
	GradeBook1(string, string);
	void SetCourseName(string);
	void SetInstructor(string);
	string getCourseName();
	string getInstructor();
	void displayMessage();
private:
	string courseName;
	string instructor;
};