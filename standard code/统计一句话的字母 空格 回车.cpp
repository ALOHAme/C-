
#include <iostream>
using namespace std;

int main()
{
	int cnt2, cnt3, cnt4;
	int cnt1 = cnt2 = cnt3 = cnt4 = 0;
	char ch;
	while (cin.get(ch))
	{
		if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)//ASCII的应用【期末考试】
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
	cout << "字母有：" << cnt1 << "个。\n";
	cout << "空格有：" << cnt2 << "个。\n"; 
	cout << "制表有：" << cnt3 << "个。\n";
	cout << "回车有：" << cnt4 << "个。\n";
	system("pause");
	return 0;
}