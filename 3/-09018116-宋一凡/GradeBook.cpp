#include<iostream>
#include"GradeBook.h"
using namespace std;
GradeBook::GradeBook(string name1,string name2)
{
	setCourseName(name1);
	setInstructorName(name2);
}
void GradeBook::setCourseName(string name)
{
	courseName=name;
}
void GradeBook::setInstructorName(string name)
{
	instructorName=name;
}
string GradeBook::getCourseName()
{
	return courseName;
}
string GradeBook::getInstructorName()
{
	return instructorName;
}
void GradeBook::displayMessage()
{
	cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!"<<endl;
	cout<<"This course is presented by:"<<getInstructorName()<<endl;
}
