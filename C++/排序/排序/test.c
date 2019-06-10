#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

int main()
{
	int array[] = { 2, 8, 3, 4, 6, 0, 7, 5, 9, 1 };
	PrintArray(array, sizeof(array) / sizeof(array[0]));
	//InsertSort(array, sizeof(array) / sizeof(array[0]));
	//ShellSort(array, sizeof(array) / sizeof(array[0]));
	//SelectSort(array, sizeof(array) / sizeof(array[0]));
	//SelectSortOP(array, sizeof(array) / sizeof(array[0]));
	

	PrintArray(array, sizeof(array) / sizeof(array[0]));


	system("pause");
	return 0;
}