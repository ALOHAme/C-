#include<iostream>
#include"GradeBook.h"
using namespace std;
int main(){
	GradeBook gradebook1("CS101 Introduction to C++ Programming","Sam Smith");
	gradebook1.displayMessage();
	cout<<"Changing instructor name to Judy Jones"<<endl;
	gradebook1.setInstructorName("Judy Jones");//我只会这样写GradeBook gradebook1("CS101 Introduction to C++ Programming","Judy Jones");
	gradebook1.displayMessage();
	return 0;
}