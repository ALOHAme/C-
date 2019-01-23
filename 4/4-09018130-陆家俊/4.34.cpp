#include<iostream>
#include<iomanip>
using namespace std;

long long fac(int n){
	if(n>1)return n*fac(n-1);
	else return 1;
}

int main(){
	double e=1,temp=1,counter=2,x;
	int num,cnt;
	
	do
	{
		cout<<"Enter a nonnegative integer:";
		cin>>num;
	}while(num<0);
	cout<<"The factorial of "<<num<<" is "<<fac(num)<<endl<<endl;
	
	cout<<"Enter the precision of e:";
	cin>>cnt;
	while(counter<cnt+2){
		e+=(1/temp);
		temp*=counter;
		counter++;
	}
	cout<<"The value of the mathematical constant e is "<<e<<endl<<endl;
	
	cout<<"Enter the value of x:";
	cin>>x;
	cout<<"Enter the precision of e:";
	cin>>cnt;
	e=1;temp=x;counter=2;
	while(counter<cnt+2){
		e+=temp;
		temp*=x/counter;
		counter++;
	}
	cout<<"The value of e^x is "<<e<<endl<<endl;
}
