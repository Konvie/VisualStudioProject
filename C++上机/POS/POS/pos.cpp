#include <iostream>
#include "Commodity.h"

using namespace std;

CCommodity::CCommodity() {
	cout << "CommodityInfo is being created!" << endl;
}

void CCommodity::setInfo(long ld, char upc, char name, double price, char manu) {
	m_nld = ld;
	m_pszUpc = &upc;
	m_pszName = &name;
	m_dPrice = price;
	m_pszManufacturer = &manu;
}

void CCommodity::acquire(char& upc) {
	m_pszUpc = &upc;
	if (*m_pszUpc) {
		showInfo();
	}
}

void CCommodity::showInfo() {
	cout << "��Ʒ���ƣ�" << *m_pszName
		<< "���ۣ�" << m_dPrice
		<< "��������Ϣ��" << *m_pszManufacturer << endl;
}

void CCommodity::total(int num) {
	double totalVal = m_dPrice * num;
	cout << "��ѡ��Ʒ�ܼ�Ϊ��" << total << endl;
}

CCommodity::~CCommodity()
{
}


int main() {
	CCommodity commodity1;
	commodity1.setInfo(100001, 'A', );
	return 0;
}