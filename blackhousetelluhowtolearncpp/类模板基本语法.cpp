#include <iostream>
#include <string>
using namespace std;
template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	NameType m_Name;
	AgeType m_Age;
	void showPerson()
	{
		cout << "NameK" << this->m_Name << "age" << this->m_Age << endl;
	}
};
void test01()
{
	Person<string, int>p1("Monkey King", 999);
	p1.showPerson();
}


int main()
{
	test01();
	return 0;
}