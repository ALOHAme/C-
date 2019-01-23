#include<iostream>

using namespace std;

int counter = 1, number, largest;//建立三个变量
int main()
{
	cout << "Enter a number: " << endl;
	cin >> number;
	largest = number;

	while (counter < 10) //通过while来循环执行代码，直到找到最大者
	{
		cout << "Enter a new number: " << endl;
		cin >> number;
		
		if (number > largest)//if用于更改最大值
			largest = number;

		counter++;
	}//while结束
	cout << "The largest is: " << largest << endl;

	system("pause");
	return 0;
}