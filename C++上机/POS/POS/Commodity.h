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
	long m_nld; // 商品唯一标识
	char* m_pszUpc; // 通用产品代码
	char* m_pszName; // 商品名称
	double m_dPrice; // 商品价格
	char* m_pszManufacturer; // 商品制造商

};

#endif