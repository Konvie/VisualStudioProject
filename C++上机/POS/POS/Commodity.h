#pragma once
#ifndef Commodity_H_
#define Commodity_H_
class CCommodity
{
public:
	void setInfo(long ld, char upc, char name, double price, char manu);
	void acquire(char& upc);
	void showInfo();
	void total(int num);
	CCommodity();
	~CCommodity();

private:
	long m_nld; // ��ƷΨһ��ʶ
	char* m_pszUpc; // ͨ�ò�Ʒ����
	char* m_pszName; // ��Ʒ����
	double m_dPrice; // ��Ʒ�۸�
	char* m_pszManufacturer; // ��Ʒ������

};

#endif