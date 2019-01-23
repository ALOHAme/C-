#include<iostream>
using std::cout;
using std::cin;

int main()
{
	char letter; int i = 0;
	while (i < 100) {
		cout << "Enter a letter:";
		cin >> letter;
		cout << static_cast <int>(letter)<<std::endl;
	}
	system("pause");
}