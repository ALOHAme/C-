#include<iostream>
using namespace std;

int main()
{
	int guest = 1;
	while (guest++ < 2) 
		cout << guest << endl;

	/*
	完整表达式末尾是一个sequence point
	后缀++表明先将guest与2作比较
	sequence point确保副作用（将guest加1）在cout之前完成
	*/
	system("pause");
	return 0;
}

