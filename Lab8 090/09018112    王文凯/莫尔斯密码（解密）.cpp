#define _CRT_SECURE_NO_WARNINGS//��strtok��Ҫд�����򱨴�
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
//�˸��ˣ�ֻ��ת����Сд
static const char TEXT[37] = { ' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0' };
static const string CODE[37] = { "  ",".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".----","..---","...--","....-",".....","-....","--...","---..","----.","-----" };


int search(string);//��Ϊ����CODE[i]Ϊstring
void convert(char[], int);


int main() {
	cout << "����һ���ַ��� \n";
	char sentence[100] = "";
	cin.getline(sentence, 100);
	convert(sentence, strlen(sentence));
	system("pause");
	return 0;
}

void convert(char arr[], int size) {
		char *tokenPtr;
		tokenPtr = strtok(arr, " ");
		while (tokenPtr != NULL)
		{
			cout << TEXT[search(tokenPtr)];
			tokenPtr = strtok(NULL, " ");
		}
	}


int search(string a) {
	for (int i = 0; i <= 37; i++) {
		if (CODE[i] == a)
			return i;
	}
	return 0;
}
