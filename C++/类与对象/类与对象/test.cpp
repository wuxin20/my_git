#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream >

using namespace std;

#if 0
struct Student
{
	void SetStudentInfor(const char* name, const char* gender, int age)
	{
		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}

	void PrintStudentInfo()
	{
		cout << _name << " " << _gender << " " <<_age<< endl;
	}

	char _name[20];
	char _gender[3];
	int _age;
};


int main()
{
	Student s;
	s.SetStudentInfor("Peter", "ÄÐ", 29);
	s.PrintStudentInfo();
	return 0;
}
#endif 

#if 0
class Date
{
public:
	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	void SetDate(int year, int month, int day)
	{

		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;

};

int main()
{
	Date d1, d2;
	d1.setdate(2018, 5, 1);
	d2.setdate(2018, 7, 1);
	d1.display();
	d2.display();
	return 0;
}
#endif

class A
{
public:
	void PrintA(int a)
	{
		_a = a;
		cout << a << endl;
	}


private:
	int _a;
};

int main()
{
	A a;
	a.PrintA(5);

	return 0;
}