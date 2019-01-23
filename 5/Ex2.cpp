//���ʼ�ĳ���
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
// 4��int            2���ֽ�16λ
//    long         4���ֽ�32λ
//    long���� int ���ֻ����

1���������ִ���˶��ٴ��������forѭ��?����������һ�����������ü����������ѭ�������Ĵ���������һ������Ϊlong���±�������ΪloopCounter���������ʼ��Ϊ0��Ȼ�����������for��������һ����䣬ʹloopCounter����1���˳�����֮ǰ����ӡloopCounter��ֵ������ƥ����?
���������forѭ������������һ��break��䡣���break���Ӧ���ڷ��ֵ�20�����ɶ������á������ڷ��ֵ�20����Ԫ����������ʲô����������forѭ�����˳��ˣ�����ֻ���������һ��?��break�������м�ѭ����ʱ�ᷢ��ʲô?������ѭ����?
3.�ڳ��������һ��continue��䣬�Է�ֹ��side1 = 8ʱ�ҵ��ϴ����˹����̬��ʹ�����Ľ����������������1����������³���ִ�����ڲ�forѭ���Ĵ���������Ϊʲôcontinue����Ӱ�������
4����Ϊʲô����������б�ߺͲ�߱߾ࡣ�޸ĳ���ʹ���Ƕ��Ƕ����Ͷ����ǳ����͡��������г��򡣻ᷢ��ʲô��?
*/