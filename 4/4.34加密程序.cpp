#include<iostream>
using namespace std;

int main()
{
	int number, a, b, c, d;

	cout << "请输入一个四位数：" << endl;
	cin >> number;

	a = number / 1000;
	number = number % 1000;

	b = number / 100;
	number = number % 100;

	c = number / 10;
	number = number % 10;

	d = number / 1;

	//加密数字
	a = (a + 7) % 10;
	b = (b + 7) % 10;
	c = (c + 7) % 10;
	d = (d + 7) % 10;


	
	cout << c << d << a << b;
	system("pause");
	return 0;
}