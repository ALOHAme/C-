#include<iostream>
using namespace std;

int main()
{
	int guest = 1;
	while (guest++ < 2) 
		cout << guest << endl;

	/*
	�������ʽĩβ��һ��sequence point
	��׺++�����Ƚ�guest��2���Ƚ�
	sequence pointȷ�������ã���guest��1����cout֮ǰ���
	*/
	system("pause");
	return 0;
}

