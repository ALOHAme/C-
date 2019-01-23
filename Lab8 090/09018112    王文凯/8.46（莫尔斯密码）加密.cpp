#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void convert(const char arr[], int size);
int search(char a);
static const char TEXTU[37] = { ' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0' };
static const char TEXTD[37] = { ' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0' };
static const string CODE[37] = { "  ",".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".----","..---","...--","....-",".....","-....","--...","---..","----.","-----" };
//用下标来对应，比用switch快多了

int main() {
	char data[100]="";
	cin.getline(data, 100);
	convert(data, strlen(data));
	system("pause");
	return 0;
}
void convert(const char arr[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << CODE[search(arr[i])] << ' ';//字母间的单空格
	}
}
//返回下标，直接转换
int search(char a) {//妙！传递的直接是一个字符
	for (int j = 0; j <= 37; j++) {
		if ((TEXTU[j] == a) || (TEXTD[j] == a))
			return j;
	}
	return 0;//把0作为数组中的一位，直接替换单词分隔符（空格）
}

