#pragma once
#include <iostream>
#include <string>
using namespace std;
#define size 32
#define len 56
#define key 4

class CCaesar
{
private:
	static CCaesar* instance;  //��������һ�������ָ��
	CCaesar()
	{
		cout << "����һ����������" << endl;
	}
	~CCaesar()
	{
		cout << "����һ����������" << endl;
	}


public:
	static CCaesar* getinstance();
	static void menu();

	static char code[len];

	static void init_Code();
	//{//��ʼ����������Գ�ʼ��Ϊ�Լ���Ҫ���κ��ַ�
	//	for (int i = 0; i < 26; i++)
	//	{
	//		code[i] = char(65 + i);
	//	}
	//	for (int i = 0; i < 26; i++)
	//	{
	//		code[i + 26] = char(97 + i);
	//	}

	//	code[len - 1] = char(34);
	//	code[len - 2] = char(39);
	//	code[len - 3] = char(59);
	//	code[len - 4] = char(44);
	//}
	static void print_Code();  //������ʾ�����
	/*{
		for (int i = 0; i < len; i++)
		{
			cout << i << "  -------->" << code[i] << endl;
		}
	}*/
	static char* Encrypt(char* conse1);  //���ܺ���
	static char* Decrypt(char* conse2);  //���ܺ���


	static void deleteCaesar();
};



