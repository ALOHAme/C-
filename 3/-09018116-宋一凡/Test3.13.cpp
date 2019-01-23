#include<iostream>
#include"Invoice.h"
using namespace std;
int main(){
	Invoice invoice1("No.1","valuable",2,198802);
	invoice1.displayMessage();
	Invoice invoice2("No.2","error",-1,-1);
	invoice2.displayMessage();
	return 0;
}