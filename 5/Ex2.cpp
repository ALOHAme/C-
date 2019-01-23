//最初始的程序
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int count = 0; 
	long int hypotenuseSquared;
	long int sidesSquared; 

	cout << "Side 1\tSide 2\tSide3" << endl;

	for (int side1 = 1; side1 <= 500; ++side1)
	{
		for (int side2 = side1; side2 <= 500; ++side2)
		{
			for (int side3 = side2; side3 <= 500; ++side3)
			{
				
				hypotenuseSquared = side3 * side3;
				
				sidesSquared = side1 * side1 + side2 * side2;
				
				if (hypotenuseSquared == sidesSquared)
				{
					
					cout << side1 << '\t' << side2 << '\t'
						<< side3 << '\n';
					count++; // update count
				} // end if
			} // end for
		} // end for
	} // end for

	
	cout << "A total of " << count << " triples were found." << endl;
	system("pause");
	return 0; 
}


/*
//Follow question
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int count = 0;
	long int hypotenuseSquared;
	long int sidesSquared;
	long loopCounter = 0;
	cout << "Side 1\tSide 2\tSide3" << endl;

	for (int side1 = 1; side1 <= 500; ++side1)
	{
		if (side1 == 8)
			continue;
		for (int side2 = side1; side2 <= 500; ++side2)
		{
			for (int side3 = side2; side3 <= 500; ++side3)
			{

				hypotenuseSquared = side3 * side3;

				sidesSquared = side1 * side1 + side2 * side2;

				if (hypotenuseSquared == sidesSquared)
				{

					cout << side1 << '\t' << side2 << '\t'
						<< side3 << '\n';
					count++; // update count
				} // end if

				if (count == 20)
					break;
				++loopCounter;
			} // end for
		} // end for
	} // end for

	cout << "The number of times this loop iterates is:" << loopCounter << endl;
	cout << "A total of " << count << " triples were found." << endl;
	system("pause");
	return 0;
}
// 4）int            2个字节16位
//    long         4个字节32位
//    long还成 int 数字会溢出

1。这个程序执行了多少次最里面的for循环?向程序添加另一个计数器，该计数器计算此循环迭代的次数。声明一个类型为long的新变量，名为loopCounter，并将其初始化为0。然后在最里面的for语句中添加一个语句，使loopCounter增加1。退出程序之前，打印loopCounter的值。数字匹配吗?
在最里面的for循环中向程序添加一个break语句。这个break语句应该在发现第20个勾股定理后调用。解释在发现第20个三元组后程序发生了什么。所有三个for循环都退出了，还是只有最里面的一个?当break语句放在中间循环中时会发生什么?最外层的循环吗?
3.在程序中添加一个continue语句，以防止在side1 = 8时找到毕达哥拉斯三重态。使用您的解决方案来跟踪问题1，计算这个新程序执行最内层for循环的次数。解释为什么continue语句会影响输出。
4解释为什么长变量用于斜边和侧边边距。修改程序，使它们都是短类型而不是长类型。重新运行程序。会发生什么呢?
*/