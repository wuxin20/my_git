#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


#if 0
class Person
{
public:
	void Print()
	{
		  cout << "name:" << _name << endl;
     }
protected:
	string _name;
	int _age;

};

class Student : public Person
{
protected:
	int _stuid;
};

class Teacher : public Person
{
protected:
	int _jobid;
};

int main()
{
	Student s;
	Teacher t;
	s.Print();
	t.Print();
	return 0;
}
#endif


#if 0
class Person
{
public:
	void Print()
	{
		cout << _name << endl;
	}
protected:
	string _name;
private:
	int _age;
};


class Student : public Person
{
protected:
	int _stunum;
};
#endif 


#if 0
class Person
{
protected:
	string _name;
	string _sex;
	int age;
};

class Student : public Person
{
public:
	int _No;
};

void Test()
{
	Student sobj;
	Person pobj = sobj;
	Person* pp = &sobj;
	Person& rp = sobj;

	sobj = pobj;

	pp = &sobj;
	Student* ps1 = (Student*)pp;
	ps1->_No = 10;

	pp = &pobj;
	Student* ps2 = (Student*)pp;
	ps2->_No = 10;
}
#endif

#if 0
class Person
{
protected:
	string _name;
	int _num;
};

class Student : public Person
{
public:
	void Print()
	{
		cout << "姓名：" << _name << endl;
		cout << "身份证号：" << Person::_num << endl;
		cout << "学号：" << _num << endl;
	}
protected:
	int _num = 999;
};

void Test()
{
	Student s1;
	s1.Print();
}

int main()
{
	Test();
	return 0;
}
#endif


#if 0
class A
{
public:
	void fun()
	{
		cout << "fun()" << endl;
	}
};

class B : public A
{
public:
	void fun(int i)
	{
		A::fun();
		cout << "fun(int i)->" << i << endl;

	}
};

void Test()
{
	B b;
	b.fun(10);
}

int main()
{
	Test();
	return 0;
}
#endif


class Person
{
public:
	Person(const char* name = "keke")
		: _name(name)
	{
		cout << "Person("
			<< endl;
	}

	Person(const Person& p)
		:_name(p._name)
	{
		cout << "Person(const Person& p" << endl;
	}

	Person& operator=(const Person& p)
	{
		cout << "Person operator=(const Person& p)" << endl;
		if (this != &p)
		{
			_name = p._name;
		}
		return *this;
	}

	~Person()
	{
		cout << "~Person ()" << endl;
	}
protected:
	string _name;
};

class Student : public Person
{
public:
	Student(const char* name, int num)
		:Person(name)
		, _num(num)
	{
		cout << "Student()" << endl;
	}
	Student(const Student&s)
		:Person(s)
		, _num(s._num)
	{
		cout << "Student(const Student& s)" << endl;
	}
	Student& operator=(const Student& s)
	{
		cout << "Studet& operator=(const Student& s)" << endl;
		if (this != &s)
		{
			Person::operator=(s);
			_num = s._num;
		}
		return *this;
	}

	~Student()
	{
		cout << "~Student()" << endl;
	}
protected:
	int _num;
};

void Test()
{
	Student s1("jack", 18);
	Student s2(s1);
	Student s3("rose", 17);
	s1 = s3;
}

int main()
{
	Test();
	return 0;
}