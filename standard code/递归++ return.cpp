#include<iostream>
using namespace std;

int t(int m,int n) {
	static int num = 0;
	if (num == 1)
		return num++, num + m;//return的是后者
	else
		return num++, num + m*t(m,n-1);
}
int main() {
	cout << t(2, 3);
	system("pause");
}
//结果 10