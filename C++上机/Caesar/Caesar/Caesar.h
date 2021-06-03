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
	static CCaesar* instance;  //单例对象，一个类对象指针
	CCaesar()
	{
		cout << "创建一个单例对象" << endl;
	}
	~CCaesar()
	{
		cout << "析构一个单例对象" << endl;
	}


public:
	static CCaesar* getinstance();
	static void menu();

	static char code[len];

	static void init_Code();
	//{//初始化密码表，可以初始化为自己需要的任何字符
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
	static void print_Code();  //可以显示密码表
	/*{
		for (int i = 0; i < len; i++)
		{
			cout << i << "  -------->" << code[i] << endl;
		}
	}*/
	static char* Encrypt(char* conse1);  //加密函数
	static char* Decrypt(char* conse2);  //解密函数


	static void deleteCaesar();
};



