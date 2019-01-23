#include<iostream>
using namespace std;

int main()
{
	cout << "输入一些数字（第一个数字表示后边有多少个数字）："
		<< endl;
	int x, y;
	int i = 1;
	int smallest = x;
	for (cin >> x; i <= x; ++i)
		{
		cin >> y;
		if (smallest > y);
		smallest = y;
		}

	cout << "最小的是"<< smallest << endl;
	
	system("pause");
}