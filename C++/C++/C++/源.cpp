#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



/*
C++入门
1.对C语言中涉及缺陷的解决

全局变量的命名冲突------namespace（命名空间）




2.C++小的知识点
3.C++11小的特性

//关键字


*/

/*
//不是类型，是一个作用域

namespace N1
{
	int a = 10;


	int Add(int left, int right)
	{
		return left + right;
	}

}

//命名空间的嵌套
namespace N2
{
	int a = 10;

	int Sub(int left, int right)
	{
		return left - right;
	}


	namespace N3
	{

		int a = 50;

		int Mni(int left, int right)
		{
			return left*right;
		}
	}

}*/

//如果存在相同名称命名空间，编译器会将其合并
#if 0
namespace N1
{

	int c = 30;

	int Div(int left, int right)
	{
		return left / right;

	}
}

//使用方法
//1.N::c
//2.using N1::c; 
//3.using namespace N1;

int a = 20;   //全局作用域

int main()
{
	int a = 30;

	printf("%d\n", a);
	printf("%d\n", ::a);    //::作用域运算符
	printf("%d\n", N1::a);
	printf("%d\n", N2::N3::a);





	system("pause");
	return 0;
}
#endif

#if 0
#include <iostream>
using namespace std;

//输出cout
//输入cin
int main()
{
	int a = 0;
	cin >> a;
	double d;



	cin >> d;
	cout << "hello word" << endl;
	cout << 10 << " " << 12.34 << " " << 'a' << endl;

	return 0;
}
#endif


#if 0

#include <iostream>
using namespace std;

class Date
{
public:
	Date(int year=1900,int month=1,int day=1)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int,int):" << this << endl;
	}

	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;

		cout << "Date(Date&):" << this << endl;
	}


	~Date()
	{
		cout << "~Date():" << this << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(1998,4,20);
	Date d2(d1);

	return 0;

}

#endif



#if 0
int main()
{
	//单个元素空间
	int* p1 = new int;
	int* p2 = new int(10);


	//连续空间
	int* p3 = new int[10];
	int* p4 = new int[4]{1, 2, 3, 4};

	delete[] p3;
	delete[] p4;

	return 0;
}

#endif






