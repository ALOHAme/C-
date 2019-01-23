#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int counter=0,a;
	long long number,total=0;
	
	cout<<"Please enter a binary number:\n";
	cin>>number;
	
	while(number){
		a=number%10;
		total+=a*pow(2,counter);
		counter++;
		number/=10;
	}
	
	cout<<"The decimal equivalent is:"<<total;
}
