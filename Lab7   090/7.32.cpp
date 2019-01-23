#include<iostream>
using namespace std;
bool testPalindrome(char string1[], int low, int high)//测试string是否为回文
{
	if (low != high) {
		if (string1[low] == string1[high])
			return testPalindrome(string1, low + 1, high - 1);
		else
			return false;
	}
	else
		return true;
}

int main()
{
	cout << "string1 = radar"<<endl;
	char string1[6] = "radar";
	cout<<(testPalindrome(string1, 0, 4))<<endl;

	cout << "string2 = able was i ere i saw elba" << endl;
	char string2[26] = "able was i ere i saw elba";
	cout << (testPalindrome(string2, 0, 24))<<endl;

	cout << "string3 = saded" << endl;
	char string3[6] = "saded";
	cout << (testPalindrome(string3, 0, 4)) << endl;
	system("pause");
	return 0;
}