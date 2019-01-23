#include<iostream>
#include"Ex1.h";
using namespace std;

GradeBook1::GradeBook1(string name1, string name2)
{
	SetCourseName(name1);
	SetInstructor(name2);
}

void GradeBook1::SetCourseName(string name1)
{
	courseName = name1;
}

void GradeBook1::SetInstructor(string name2)
{
	instructor = name2;
}

string GradeBook1::getCourseName()
{
	return courseName;
}

string GradeBook1::getInstructor()
{
	return instructor;
}

void GradeBook1::displayMessage()
{
    cout <<"Welcome to the grade book for\n"<<getCourseName()
		 <<"!\n"
		 << "The course is presented by "<<getInstructor()
		 <<"\n";
}