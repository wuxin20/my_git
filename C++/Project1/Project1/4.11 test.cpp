#define _CRT_SECURE_NO_WARNINGS 1


#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;


#if 0
int main()
{
	string s("hello");
	s.resize(3, '$');

	s.reserve(50);
	
	return 0;

}

#endif


#if 0
int main()
{
	string s1("hello");
	s1 += " word";

	string s2("!!!");
	s1 += s2;
	

	return 0;
}

#endif


#if 0
int main()
{
	string s("hello");
	s.assign("word!!!");

	string strFilePostFix;
	size_t pos = s.rfind('.');
	strFilePostFix = s.substr(pos, s.size() - pos);


	return 0;
}

#endif

#if 0
int main()
{
	string url("file://C:/Users/lenovo/Desktop/");
	size_t pos = url.find("://") + 3;
	string str = url.substr(pos, url.find('/', pos) - pos);
	cout << str << endl;


	return 0;
}

#endif

int main()
{

	string s;
	getline(cin, s);
	cout << s << endl;


	return 0;
}