#include<iostream>
using namespace std;

int main(){
	int counter=0;
	double number,largest=0;
	
	cout<<"Please enter 10 numbers:\n";
	
	while(counter<10){
		cin>>number;
		if(number>largest)largest=number;
		counter++;
	}
	
	cout<<"The largest number is:"<<largest;
}
