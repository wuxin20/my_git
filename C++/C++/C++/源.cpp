#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



/*
C++����
1.��C�������漰ȱ�ݵĽ��

ȫ�ֱ�����������ͻ------namespace�������ռ䣩




2.C++С��֪ʶ��
3.C++11С������

//�ؼ���


*/

/*
//�������ͣ���һ��������

namespace N1
{
	int a = 10;


	int Add(int left, int right)
	{
		return left + right;
	}

}

//�����ռ��Ƕ��
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

//���������ͬ���������ռ䣬�������Ὣ��ϲ�
#if 0
namespace N1
{

	int c = 30;

	int Div(int left, int right)
	{
		return left / right;

	}
}

//ʹ�÷���
//1.N::c
//2.using N1::c; 
//3.using namespace N1;

int a = 20;   //ȫ��������

int main()
{
	int a = 30;

	printf("%d\n", a);
	printf("%d\n", ::a);    //::�����������
	printf("%d\n", N1::a);
	printf("%d\n", N2::N3::a);





	system("pause");
	return 0;
}
#endif

#if 0
#include <iostream>
using namespace std;

//���cout
//����cin
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
	//����Ԫ�ؿռ�
	int* p1 = new int;
	int* p2 = new int(10);


	//�����ռ�
	int* p3 = new int[10];
	int* p4 = new int[4]{1, 2, 3, 4};

	delete[] p3;
	delete[] p4;

	return 0;
}

#endif






