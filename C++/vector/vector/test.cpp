#define _CRT_SECURE_NO_WARNINGS 1


#if 0
#include <iostream>
#include <vector>

using namespace std;



int main()
{
	std::vector<int> v1;
	vector<int> v2(10, 5);

	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> v3(array, array + sizeof(array) / sizeof(int));
	vector<int> v4(v3);



	return 0;
}

#endif

#if 0

#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	cout << v.size << endl;
	cout << v.capacity() << endl;

	for (auto e : v)
	{
		cout << e << endl;
	}
	cout << endl;

	//auto it = v.begin();

	//vector<int>::iterator it = v.begin();
	//while(it != v.end)
	//{
	//	cout << *it << " ";
	//	++it;
	//}
	//cout << endl;

	v.resize(20, 9);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	for (auto e : v)
	{
		cout << e << endl;
	}
	cout << endl;


	return 0;
}

#endif



#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	cout << v.front << endl;
	cout << v.back << endl;


	return 0;
}