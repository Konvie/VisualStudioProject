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
	cout << "商品名称：" << *m_pszName
		<< "单价：" << m_dPrice
		<< "制造商信息：" << *m_pszManufacturer << endl;
}

void CCommodity::total(int num) {
	double totalVal = m_dPrice * num;
	cout << "已选商品总价为：" << total << endl;
}

CCommodity::~CCommodity()
{
}


int main() {
	CCommodity commodity1;
	commodity1.setInfo(100001, 'A', );
	return 0;
}