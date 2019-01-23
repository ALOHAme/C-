#include<iostream>
using namespace std;

int main()
{
	int number, a, b, c, d;

	cout << "请输入一个四位加密数：" << endl;
	cin >> number;

	c = number / 1000;
	number = number % 1000;

	d = number / 100;
	number = number % 100;

	a = number / 10;
	number = number % 10;

	b = number / 1;

	//解密数字
	if (a < 7)
		a = a + 10 - 7;
	else
		a = a - 7;
	
	if (b < 7)
		b = b + 10 - 7;
	else
		b = b - 7;

	if (c < 7)
		c = c + 10 - 7;
	else
		c = c - 7;

	if (d < 7)
		d = d + 10 - 7;
	else
		d = d - 7;

	cout << a << b << c << d;
	system("pause");
	return 0;
}