#include<iostream>
 #include<string>
 using namespace std;

 // ����ǰ�����ǿ��е�
 int main()
 {
	 string str1 = "hello";
	 string* str2 = new string("hello");
	 string str3 = "world";


	 // ��ȡ�ַ����ĵ�һ���ַ�
	 string::const_iterator it = str1.begin();
	 cout << *it << endl;
	 cout << endl;


	 //��ȡ�ַ��������һ���ַ�
	      it = str1.end();//end��ָ�����һ���ַ������Ԫ�أ����Ҳ������,����cout << *it << endl;��������ᱨ��
	      it--;
	      cout << *it << endl;
		  cout << endl;

		  //���ô�
		       reverse(str1.begin(), str1.end());
		       cout << "���ô���" << str1 << endl;
		       cout << endl;


			   //��ȡ�ַ�������
			        int length = str1.length();
			        cout << "����str.length()������ȡ�ַ������ȣ�" << length << endl;
			        cout << endl;


					//�ַ�������
					     string str4 = str1 + str3;
					     cout << "�ַ������ӽ����" << str4 << endl;
					     cout << endl;


						 //�ַ����Ƚ�         �ǱȽ�һ����ASCII�Ķ���
						 /*ASCII�룺����(����)��Ϣ������׼(��)�룬һ��ʹ��7����8��������λ���б���ķ�����
						 �����Ը�256���ַ�(������ĸ�����֡������š������ַ�����������)����(��ָ��)��ֵ��
						 ASCII��1968������������ڲ�ͬ�����Ӳ�������ϵͳ��ʵ�����ݴ����׼�����ڴ������С�ͻ���ȫ���ĸ��˼������ʹ�ô��롣
						 ASCII�뻮��Ϊ�������ϣ�128���ַ��ı�׼ASCII��͸��ӵ�128���ַ��������ASCII��.
						 ASCII��American Standard Code for Information Interchange����д�������ƶ��������ÿ�����Ŷ�Ӧ�Ĵ��룬��Ҳ���������������(code)��
						 ÿ��ASCII����1���ֽ�(Byte)���棬��0������127����ͬ�ĳ��÷��ţ������дA��ASCII����65��Сдa����97��
						 ����ASCII�ֽڵ��߸�λ�����λ����ʹ�ã����Ժ����ֽ���ߵ�һ��λҲ�������������У���Ϊ�˸�λ������ASCII(ExtendedASCII)�룬
						 �������������������ĺͱ���������ţ���ΪĿǰ���õ�����
						 
						 
						�ַ����ȽϾ��Ǵ������ַ�����һ��λ�ÿ�ʼ�Ƚ϶�Ӧλ���ϵ��ַ���ASCII��ֵ��ֱ���ֳ���С���ߴﵽĳ���ַ����Ľ�β���ȵ����β���ַ���С��
						���磺 "AC"<"B" ��ΪA��ASCII��ֵ��BС����ô����ľͲ��ڱȽ���
						"ACA"<"ACAX" ǰ������"ACA"����ͬ�����һ��ǰ����ַ����ѵ�ĩβ������С */
						      if (str1 < str3)
							          cout << "�ַ����Ƚϣ�" << "str1<str3" << endl;
							  else {
								  cout << "�ַ����Ƚϣ�" << "str1 > str3" << endl;
							  }
						      cout << endl;




							  //���Ҵ�
							       //find-��ָ��λ���������ң�ֱ����β
								       string st1("babbabab");
							       cout << st1.find('a') << endl;//1,Ĭ�ϴ�λ��0������1���ַ�����ʼ����
							       cout << st1.find('a', 2) << endl;//4   ��st1�У���λ��2��b������λ��2����ʼ������a�������״�ƥ���λ��
							       cout << (st1.find('c', 0) == -1) << endl;//1 
							       cout << (st1.find('c', 0) == 4294967295) << endl;//1   ��������1��ԭ���Ǽ������-1��4294967295����ʾΪ32��1�������ƣ�
							       string st2("aabcbcabcbabcc");
							       str1 = "abc";
							       cout << st2.find(str1, 2) << endl;//6,��st2��λ��2��b����ʼƥ�䣬���ص�һ�γɹ�ƥ��ʱƥ��Ĵ���abc�������ַ���st2�е�λ�ã�ʧ�ܷ���-1
							       cout << st2.find("abcdefg", 2, 3) << endl;//6   ȡabcdefg��ǰ3���ַ���abc������ƥ�䣬�൱��st2.find("abc", 2)
							  
								       //rfind-��ָ��λ������ǰ���ң�ֱ������
								       cout << st1.rfind('a', 7) << endl;//6
							  
								       //find_first_of-��Դ���д�λ��pos��������ң�ֻҪ��Դ��������һ���ַ������ַ���Ŀ�괮������һ���ַ���ͬ����ֹͣ���ң����ظ��ַ���Դ���е�λ�ã���ƥ��ʧ�ܣ�����-1
								       string str6("bcgjhikl");
							       string str7("kghlj");
							       cout << str6.find_first_of(str7, 0) << endl;//2,��str1�ĵ�0���ַ�b��ʼ�ң�g��str2�е�gƥ�䣬ֹͣ���ң�����g��str1�е�λ��2
							  
								       //find_last_of-��find_first_of�������ƣ�ֻ��������˳���Ǵ�ָ��λ����ǰ
								       string str("abcdecg");
							       cout << str.find_last_of("hjlywkcipn", 6) << endl;//5,��str��λ��6(g)��ʼ��ǰ�ң�g��ƥ�䣬����c��cƥ�䣬ֹͣ���ң�����c��str�е�λ��5
							  
								       //find_first_not_of-��Դ���д�λ��pos��ʼ������ң�ֻҪ��Դ������һ���ַ�����Ŀ�괮�е������ַ�������ͬ����ֹͣ���ң����ظ��ַ���Դ���е�λ�ã�������������Դ�������Ҳ��������������ַ����򷵻�-1
								       cout << str.find_first_not_of("kiajbvehfgmlc", 0) << endl;//3   ��Դ��str��λ��0(a)��ʼ���ң�Ŀ�괮����a��ƥ�䣬..,��d��Ŀ�괮��û��d����ƥ�䣩��ֹͣ���ң�����d��str�е�λ��3
							  
								       //find_last_not_of-��find_first_not_of���ƣ�ֻ��������˳���Ǵ�ָ��λ����ǰ
								       cout << str.find_last_not_of("kiajbvehfgmlc", 6) << endl;//3

              //�ַ���ת�ַ�����
								//���Ƽ����÷���������Ҫ�˽�	 
									   string a = "abc123";
									        const char *b;//�������Ϊconst char *��������char *,��Ȼ��һ��ᱨ��
									        b = a.c_str();
									        cout << "a:" << a << endl;
									        cout << "b:" << b << endl;
									        a = "asd456";
									       cout << "a:" << a << endl;
									        cout << "b:" << b << endl;
	 system("pause");

	 return 0;
 }