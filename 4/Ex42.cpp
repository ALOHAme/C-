#include<iostream>
using namespace std;

int main()
{
	int integer, a, b, c, d, e;
	cout << "Enter a five - digit integer" << endl;
	cin >> integer;

	a = integer / 10000;
	
	e = integer % 10;

	cout << a  << "  " << e;




	cout << "the five - digit integers is a palindrome!";
	cout << "It is not a palindrome!";

	system("pause");
	return 0;
}