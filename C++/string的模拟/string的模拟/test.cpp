#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;


#if 0
//Éî¿½±´--´«Í³
namespace bit
{

	class string
	{
	public:
		
		string(const char* str = "")
		{
			if (nullptr == str)
				str = "";

			_str = new char[strlen(str) + 1];
			strcpy(_str, str);
		}

		~string()
		{
			if (_str)
			{
				delete[]_str;
				_str = nullptr;
			}
		}
		//Ç³¿½±´
		string(const string& s)
			: _str(new char[strlen(s._str)+1])
		{
			strcpy(_str, s._str);
		}

		string& operator=(const string& s)
		{
			if (this != &s)
			{
				/*
				delete[] _str;
				_str = new char[strlen(s._str) + 1];
				strcpy(_str, s._str);
				*/

				char* pStr = new char[strlen(s._str) + 1];
				strcpy(pStr, s._str);
				delete[] _str;
				_str = pStr;
			}
			return *this;
		}


	private:
		char* _str;
	};
}


void TestString()
{
	bit::string s1("hello");
	bit::string s2(nullptr);
	bit::string s3(s1);

}
int main()
{
	TestString();

	return 0;
}

#endif

#if 0
//Éî¿½±´--ÏÖ´ú°æ
namespace bit
{

	class string
	{
	public:

		string(const char* str = "")
		{
			if (nullptr == str)
				str = "";

			_str = new char[strlen(str) + 1];
			strcpy(_str, str);
		}

		~string()
		{
			if (_str)
			{
				delete[]_str;
				_str = nullptr;
			}
		}

		//Éî¿½±´
		string(const string& s)
			:_str(new char[strlen(s._str) + 1])
		{
			strcpy(_str, s._str);
		}

		//Ç³¿½±´
		string(const string& s)
		{
			string strTemp(s._str);
			swap(_str, strTemp._str);
		}

		/*
		string& operator=(const string& s)
		{

		if (this != &s)
		{
		string strTemp(s);
		swap(_str, strTemp._str);
		}
		return *this;
		}
		*/
		string& operator=(string s )
		{
			swap(_str, s._str);
			return *this;
		}


	private:
		char* _str;
	};
}


void TestString()
{
	bit::string s1("hello");
	bit::string s2(nullptr);
	bit::string s3(s1);

}


int main()
{
	
	TestString();

	return 0;
}
#endif


#if 0

namespace bite
{   
	//Ð´Êµ¿½±´
	class string
	{
	public:
		string(const char* str = "")
		{
			if (nullptr == str)
				str = "";

			_str = new char[strlen(str) + 1];
			strcpy(_str, str);
			_pCount = new int(1);
		}


		string(string& s)
			:_str(s._str)
			, _pCount(s._pCount)
		{
			++(*_pCount);
		}

		string& operator=(const string& s)
		{
			if (this != &s)
			{
				Release();

				_str = s._str;
				_pCount = _pCount;
				++(*_pCount);
			}
			return *this;
		}

		char& operator[](size_t index)
		{
			return _str[index];
		}

		const char& operator[](size_t index)const 
		{
			return _str[index];
		}


		~string()
		{
			Release();
		}

	private:
		void Release()
		{
			if (_str && 0 == --(*_pCount))
			{
				delete[]_str;
				delete _pCount;
				_pCount = nullptr;
				_str = nullptr;
			}

		}
	private:
		char* _str;
		int* _pCount;
	};
}



void TestString()
{
	bite::string s1("hello word!");
	bite::string s2(s1);

	bite::string s3("kkk");

}


int main()
{
	
	TestString();

	return 0;
}


#endif


#if 0
namespace bite
{
	//Ð´Êµ¿½±´
	class string
	{
	public:
		string(const char* str = "")
		{
			if (nullptr == str)
				str = "";

			_str = new char[strlen(str) + 1];
			strcpy(_str, str);
			_pCount = new int(1);
		}


		string(string& s)
			:_str(s._str)
			, _pCount(s._pCount)
		{
			++(*_pCount);
		}

		string& operator=(const string& s)
		{
			if (this != &s)
			{
				Release();

				_str = s._str;
				_pCount = _pCount;
				++(*_pCount);
			}
			return *this;
		}

		char& operator[](size_t index)
		{

			if (*_pCount > 1)
			{
				string strTemp(_str);
				Swap(strTemp);
			}

			return _str[index];
		}

		const char& operator[](size_t index)const
		{
			return _str[index];
		}


		~string()
		{
			Release();
		}

		void Swap(string& s)
		{
			swap(_str, s._str);
			swap(_pCount, s._pCount);
		}

	private:
		void Release()
		{
			if (_str && 0 == --(*_pCount))
			{
				delete[]_str;
				delete _pCount;
				_pCount = nullptr;
				_str = nullptr;
			}

		}
	private:
		char* _str;
		int* _pCount;
	};
}



void TestString()
{
	bite::string s1("hello word!");
	bite::string s2(s1);

	bite::string s3("kkk");

}


int main()
{

	TestString();

	return 0;
}

#endif



namespace bit
{

	class string
	{
	public:

		string(const char* str = "")
		{
			if (nullptr == str)
				str = "";
			_size = strlen(str);
			_capacity = strlen(str) + 1;

			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}


		string(size_t n, char c)
			:_str(new char[n+1])
			, _capacity(n)
			,_size(n)
		{
			memset(_str, c, _size);
		}

		~string()
		{
			if (_str)
			{
				delete[]_str;
				_str = nullptr;
			}
		}

		//Éî¿½±´
		string(const string& s)
			:_str(new char[strlen(s._str) + 1])
		{
			strcpy(_str, s._str);
		}

		//Éî¿½±´
		string(const string& s)
		{
			string strTemp(s._str);
			swap(_str, strTemp._str);
		}

		
		string& operator=(string s)
		{
			swap(_str, s._str);
			return *this;
		}


	private:
		char* _str;
		size_t _capacity;
		size_t _size;
		
	};
}


void TestString()
{
	bit::string s1("hello");
	bit::string s2(nullptr);
	bit::string s3(s1);

}


int main()
{
	TestString();

	return 0;
}