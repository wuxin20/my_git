#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <iostream>

using namespace std;

#if 0
void Swap(int& left, int& right)
{
	int temp - left;
	left = right;
	right = temp;
}

void Swap(double& left, double& right)
{
	double temp = left;
	left = right;
	right = temp;
}

void Swap(char& left, char& right)
{
	char temp = left;
	left = right;
	right = temp;
}

template<typename T>
void Swap(T& left, T& right)
{
	T temp = left;
	left = right;
	right = temp;
}
#endif

#if 0
template<class T>
T Add(const T& left,const T& right)
{
	return left + right;
}

int main()
{
	int a1 = 10, a2 = 20;
	double d1 = 10.0, d2 = 20.0;
	Add(a1, a2);
	Add(d1, d2);
	Add(a1, (int)d2);
	return 0;
}
#endif


#if 0
#include <assert.h>
template<class T>
class Vector
{
public:
	Vector(size_t capacity = 10)
		:_pData(new T[capacity])
		, _size(0)
		, _capacity(capacity)
	{ }

	~Vector();

	void PushBack(const T& data)
	{
		_pData[_size++] = data;
	}

	void PopBack()
	{
		--_size;
	}

	size_t Size()
	{
		return _size;
	}

	T& operator[](size_t pos)
	{
		assert(pos < _size);

		return _pData[pos];
	}


private:
	T* _pData;
	size_t _size;
	size_t _capacity;
};

template<class T>
Vector<T>::~Vector()
{
	if (_pData)
	{
		delete[] _pData;
	}
}
 
int main()
{
	Vector<int> s1;
	s1.PushBack(1);
	s1.PushBack(2);
	s1.PushBack(3);

	Vector<double> s2;
	s2.PushBack(1.0);
	s2.PushBack(2.0);
	s2.PushBack(3.0);

	for (size_t i = 0; i < s1.Size(); ++i)
	{
		cout << s1[i] << " ";
	}
	cout << endl;

	for (size_t i = 0; i < s2.Size(); ++i)
	{
		cout << s2[i] << " ";
	}
	cout << endl;

	return 0;
}
#endif

