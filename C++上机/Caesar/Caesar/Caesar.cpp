#include <iostream>
#include "Caesar.h"

CCaesar CCaesar::m_Instance;

CCaesar& CCaesar::GetInstance() {
	return m_Instance;
}

char* CCaesar::Encrypt(const char* pswd)
{
	return nullptr;
}

char* CCaesar::Decrypt(const char* pswd)
{
	return nullptr;
}

CCaesar::CCaesar(const CCaesar&)
{
}

CCaesar& CCaesar::operator=(const CCaesar&)
{
	// TODO: 在此处插入 return 语句
}

CCaesar::~CCaesar() {

}
