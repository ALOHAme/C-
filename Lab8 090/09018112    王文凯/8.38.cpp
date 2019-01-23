#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void strcpy(char s1[], const char s2[], int n) {
	int x=0;
	for (int y = 0; y < n; ++x, ++y)
		s1[x] = s2[y];

}
void strcpy2(char *p1, const char *p2) {
	for (; *p2 != '\0'; ++p1, ++p2)
		*p1 = *p2;
	*p1 == '/0';
}

void strcat(char s1[], const char s2[], int n) {
	int x;
	for (x = 0; s1[x] != '\0'; ++x)
		;
	for (int y = 0; y < n ; ++x, ++y)
		s1[x] = s2[y];
	s1[x] = '/0';

}
void strcat2(char *p1, const char *p2) {
	for (; *p1 != '\0'; ++p1)
		;
	for (; *p1 != '\0'; ++p1, ++p2)
		*p1 = *p2;
	*p2 == '/0';
}

int main()
{
	char str1[100] = "Take the test";
	char str2[16] = " Make the test";
    strcpy(str1, str2, 16);
	cout << str1 << endl;

	strcpy2(str1, str2);
	cout << str1 << endl;

	 strcat(str1, str2, 16);
	cout << str1<<endl;

	strcat2(str1, str2);
	cout << str1<<endl;
	system("pause");
}