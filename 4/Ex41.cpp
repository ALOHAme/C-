#include<iostream>

using namespace std;

int counter = 1, number, largest;//������������
int main()
{
	cout << "Enter a number: " << endl;
	cin >> number;
	largest = number;

	while (counter < 10) //ͨ��while��ѭ��ִ�д��룬ֱ���ҵ������
	{
		cout << "Enter a new number: " << endl;
		cin >> number;
		
		if (number > largest)//if���ڸ������ֵ
			largest = number;

		counter++;
	}//while����
	cout << "The largest is: " << largest << endl;

	system("pause");
	return 0;
}