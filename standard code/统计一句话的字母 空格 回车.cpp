
#include <iostream>
using namespace std;

int main()
{
	int cnt2, cnt3, cnt4;
	int cnt1 = cnt2 = cnt3 = cnt4 = 0;
	char ch;
	while (cin.get(ch))
	{
		if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)//ASCII��Ӧ�á���ĩ���ԡ�
			++cnt1;
		else
		switch (ch)
		{
			case ' ':
				++cnt2;
				break;
			case '\t':
				++cnt3;
				break;
			case '\n':
				++cnt4;
				break;
		}
	}
	cout << "��ĸ�У�" << cnt1 << "����\n";
	cout << "�ո��У�" << cnt2 << "����\n"; 
	cout << "�Ʊ��У�" << cnt3 << "����\n";
	cout << "�س��У�" << cnt4 << "����\n";
	system("pause");
	return 0;
}