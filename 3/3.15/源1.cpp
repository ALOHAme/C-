#include<iostream>
#include<istream>
#include<string>
#include"Date.h";
using namespace std;

int main()
{
	cout << "enter the date:" << endl;

	int a ,b ,c;
	cin >> a >> b >> c;
	if (a > 12)
	{
		a = 1;
	}
	Date date(a, b, c);
	date.displayDate();
	
	system("pause");
}

