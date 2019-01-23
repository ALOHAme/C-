#include<iostream>
#include<iomanip>
using namespace std;

int Celsius(int num1)
{
	return  (num1 - 32)*5 /9;
}

int Fahrenh(int num2)
{
	return num2*9/5+32;
}

int main()
{
	cout << "Fahrenheit equivalents of Celsius temperatures:" << endl;
	cout << setw(6) << "Celsius" << setw(6) << "Fahrenh" << setw(6) << "Celsius" << setw(6) << "Fahrenh" << setw(6) << "Celsius" << setw(6) << "Fahrenh" << setw(6) << "Celsius" << setw(6) << "Fahrenh" << endl;
	for (int num2 = 0; num2 <= 24; ++num2)
		cout << setw(6) << num2 << setw(6) << Fahrenh(num2) << setw(6) << (num2 + 25) << setw(6) << Fahrenh(num2+25) << setw(6) << (num2 + 50) << setw(6) << Fahrenh(num2+50) << setw(6) << (num2 + 75) << setw(6) << Fahrenh(num2+75) << endl;

	cout << "Celsius equivalents of Fahrenheit temperatures:" << endl;
	cout << setw(6) <<" Fahrenh"<< setw(6) <<"Celsius" << setw(6) << " Fahrenh" << setw(6) << "Celsius" << setw(6) << "Fahrenh" << setw(6) << "Celsius" << setw(6) << " Fahrenh" << setw(6) << "Celsius" << endl;
	for (int num1 = 32; num1 <= 76; ++num1)
		cout << setw(6) << num1 << setw(6) << Celsius(num1) << setw(6) << (num1 + 45) << setw(6) << Celsius(num1+45) << setw(6) << (num1 +90) << setw(6) << Celsius(num1+90) << setw(6) << (num1 + 135) << setw(6) << Celsius(num1+135) << endl;
	system("pause");
}
