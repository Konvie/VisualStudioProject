#pragma once
class CCaesar
{
public:
	static CCaesar& GetInstance();
	char* Encrypt(const char* pswd);
	char* Decrypt(const char* pswd);

private:
	CCaesar();
	CCaesar(const CCaesar&);
	CCaesar& operator = (const CCaesar&);
	static CCaesar m_Instance;
	~CCaesar();

};

