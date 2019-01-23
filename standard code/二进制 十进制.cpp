#include<cmath>
#include<iostream>
using namespace std;

int main()
{
	cout << "输入一个二进制数:" << endl;

	int  Binary, a, digit, x, y, sum = 0;
	//Binary为输入的二进制数
	//a为二进制数中取出的一位数 
	//digit用于统计二进制数的位数 
	//x,y用于除法和取余 
	//sum表示对应的十进制数

	cin >> Binary;
	int Binary1 = Binary;
	for (digit = 0; Binary1 > 0; ++digit)
	{
		Binary1 = Binary1 / 10;
	}
	y = digit - 1;
	while (Binary > 0)
	{
		//取首位
		x = pow(10, y);
		a = Binary / x;

		Binary = Binary % x;
		sum = sum + (a * pow(2, y));
		y--;
	}
	cout << " 该二进制数对应的十进制数为：" << sum << endl;
	system("pause");
	return 0;
}