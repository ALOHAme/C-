#include<iostream>
using namespace std;

//1指针和数组首地址相同
/*2
void bubble_sort(int arr[], int size)
{
	int i, j;  int temp;
	for (i = 0; i < size - 1; i++) {
		int flag = 1;
		for (j = 0; j < size - 1 - i; j++)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		if (flag)
			break;
	}
}
int main() {
	int a[10] = { 1,3,5,7,9,12,14,15,16,17 };
	int *p;
	p = a;
	bubble_sort(p, 10);
	cout << "Sorted data\n";
	for (int i = 0; i < 10; ++i)
		cout << *p++ << ' ';
	
	system("pause");
}*/
/*3void swap(int a, int b);  
void swap1(int a, int b);  // declare a local identifier temp*
void swap2(int* a, int* b);  // declare a local identifier temp    
void swap3(int* a, int* b);  // declare a local identifier temp*    
void swap4(int& a, int& b); // declare a local identifier temp 
int main() {
	int a = 12, b = 500;
	void swap(int a, int b);
	cout << a <<' '<< b<<endl;
	void swap1(int a, int b);
	cout << a << ' ' << b << endl;
	void swap2(int& a, int& b);
	cout << a << ' ' << b << endl;
	void swap3(int& a, int& b);
	cout << a << ' ' << b << endl;
	void swap4(int a, int b);
	cout << a << ' ' << b << endl;
	system("pause");
}
void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swap1(int a, int b) {
	int *temp=0;
	*temp = a;
	a = b;
	b = *temp;
}  // declare a local identifier temp*
void swap2(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}  // declare a local identifier temp    
void swap3(int* a, int* b) {
	int *temp;
	temp = a;
	a = b;
	b = temp;
}  // declare a local identifier temp*    
void swap4(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}*/
/*4
 int getsum(int a, int b){
 int temp =0;
 return temp=a+b;
 }// declare a local identifier temp, return temp    
 int* swap(int a, int b){
 int temp =0;
  temp=a+b;
  return &temp;
 }// declare a local identifier temp, return the address of temp
 int main() {
	int a = 12, b = 500;
	int getsum(int a, int b);
	cout << a << ' ' << b << endl;

	int* swap(int a, int b);
	cout << a <<' '<< b<<endl;
	
	system("pause");
}
*/
/*5
void strcpy2(char *p1, const char *p2) {
	for (; *p2 != '\0'; ++p1, ++p2)
		*p1 = *p2;
	*p1 == '/0';
}
int main()
{
	char str1[100] = "Take the test";
	char str2[16] = " Make the test";
	  strcpy(str1, str2, 16);
	cout << str1 << endl;
	system("pause");
}*/
/*6
void strcat(char s1[], const char s2[], int n)
{
int x;
	for (x = 0; s1[x] != '\0'; ++x)
		;
	for (int y = 0; y < n ; ++x, ++y)
		s1[x] = s2[y];
	s1[x] = '/0';

}
int main()
{
	 char str1[100] = "Take the test";
	char str2[16] = " Make the test";
	 strcpy(str1, str2, 16);
	cout << str1;
	 system("pause");
*/