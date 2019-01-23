#include<iostream>
#include<cmath>
using namespace std;

long long h(int x,int y){
	long long total=x;
	while(y>1){
		total*=x;
		y--;
	}
	return total;
}

int main(){
	int counter=0;
	long long number,m,a,b;
	
	cout<<"Please enter an integer:\n";
	cin>>number;
	
	m=number;
	while(m>=10){
		m/=10;
		counter++;
	}
	
	while(number/10>0){
		
		a=number/h(10,counter);
		b=number%10;
		
		if(a==b){
			number%=h(10,counter);
			number/=10;
			counter-=2;
		}
		else{
			cout<<"It's not a palindrome!\n";
			return 0;
		}
	}
	
	cout<<"It's a palindrome!\n";
	return 0;
}
