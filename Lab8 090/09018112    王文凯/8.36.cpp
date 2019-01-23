#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
	cout << "ÊäÈëÒ»ÐÐ×Ö·û´® \n";
	char sent[100] = "";
	char *str1[100] = {};
	int i = 0;
	cin.getline(sent, 100);

	char *tokenPtr;
	tokenPtr = strtok(sent, " ");
	while (tokenPtr != NULL)
	{
		str1[i++]= tokenPtr;
		tokenPtr = strtok(NULL, " ");
	}

	cout << "µ¹ÖÃ´®£º";
	while (i >= 0) {
		cout << str1[i] << ' ';
		--i;
	}
	cout << endl;
	system("pause");
}