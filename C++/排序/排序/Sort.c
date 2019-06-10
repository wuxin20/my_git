#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"
#include "Stack.h"

void PrintArray(int* array,int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
//��������
void InsertSort(int* array, int size)
{
	int i = 0;
	for (int i = 1; i < size; ++i)
	{

		int key = array[i];
		int end = i - 1;
		while (end >= 0 && key < array[end])
		{
			array[end + 1] = array[end];
			--end;
		}
		array[end + 1] = key;
	}

}
//ϣ������
void ShellSort(int* array, int size)
{


	int gap = size;

	while (gap>1)
	{
		gap = gap / 3 + 1;
		int i = 0;
		for (int i = gap; i < size; ++i)
		{

			int key = array[i];
			int end = i - gap;
			while (end >= 0 && key < array[end])
			{
				array[end + gap] = array[end];
				end -= gap;
			}
			array[end + gap] = key;
		}
		//gap--;
	}
	
}
//ѡ������

void Swap(int* left,int* right)
{
	int temp = *left;
	*left = *right;
	*right = temp;
}
void SelectSort(int* array, int size)
{
	int i = 0;
	  //������Ԫ��λ��
	for (int i = 0; i < size - 1; ++i)
	{
		int maxPos = 0; 
		int j = 0;
		for (j = 1; j < size - i; ++j)
		{
			if (array[j]>array[maxPos])
				maxPos = j;
		}
		Swap(&array[maxPos], &array[size - i - 1]);
	}

}

void SelectSortOP(int* array, int size)
{
	int begin = 0;
	int end = size - 1;
	while (begin < end)
	{

		int maxPos = begin;
		int minPos = begin;
		int idx = begin + 1;
		while (idx <= end)
		{
			if (array[idx] > array[maxPos])
				maxPos = idx;
			if (array[idx] < array[minPos])
				minPos = idx;

		}

		if (maxPos != end)
			Swap(&array[maxPos], &array[end]);
		if (minPos != begin)
			Swap(&array[minPos], &array[begin]);
		begin++;
		end--;
	}
	
}



//�ڿӷ�
int Partion2(int* array, int left, int right)
{
	int begin = left;
	int end = right-1;
	int key = array[right-1];

	while (begin < end)
	{
		while (begin < end && array[begin]<=key)
			begin++;
		if (begin < end)
		{
			array[end] = array[begin];
			end--;
		}
		while (begin < end && array[end] >= key)
		{
			array[begin];
		}
	}
	array[begin] = key;
	return begin;
}

int Partion3(int* array, int left, int right)
{

	int cur = left;
	int prev = cur - 1;
	int index=GetIndexOfMid(array, left, right - 1);
	Swap(&array[index], &array[right - 1]);
	int key = array[right - 1];

	while (cur < right)
	{
		if ((array[cur] < key) && (++prev != cur))
			Swap(array[cur], array[prev]);
		++cur;

	}
	if (++prev!=right-1)
		Swap(array[++prev], array[right - 1]);
	return prev;
}


int GetIndexOfMid(int*array, int left, int right)
{

	int mid = left + ((right - left) >> 1);
	if (array[left] < array[right])
	{
		if (array[mid] < array[left])
			return left;
		else if (array[mid] < array[right])
			return right;
		else
			return mid;
	}
}


void QuickSort(int* array, int left, int right)
{
	if (right - left > 1)
	{
		int div = Partion1(array, left, right);
		QuickSort(array, left, div);
		QuickSort(array, left, div);
	}

}

void QuickSortNor(int* array,int size)
{
	int left = 0;
	int right = size;
	Stack s;
	StackInit(&s);

	StackPush(&s, left);
	StackInit(&s,right);



	while (StackEmpty(&s)!=0)
	{
		left = StackTop(&s);
		STackPop(&s);
		right = StackTop(&s);
		StackPop(&s);

		int div = Partion2(array, left, right);
		if (left < div - 1)
		{
			StackPush(&s, left);
			StackPush(&s, div - 1);
		}

		if (div + 1 < right)
		{
			StackPush(&s, div + 1);
			StackPush(&s, right);
		}
	}


}


//�鲢���򣨵ݹ飩
void MergrData(int* array, int left, int mid, int right)
{
	int begin1 = left;
	int end1 = mid;
	int begin2 = mid;
	int end2 = right;
	int index = left;



	while (begin1 < end1&&begin2 < end2)
	{
		if (array[begin1] <= array[begin2])
			temp[index++] = array[begin1++];
		else
			temp[index++] = array[begin2++];

	}
	while (begin1 < end1)
		temp[index++] = array[begin1++];

	while (begin2 < end2)
		temp[index++] = array[begin2++];

}

void _MergrData(int* array, int left, int right, int temp)
{
	if (left + 1 < right)
	{
		int mid = left + ((right - left) >> 1);
		_MergrData(array, left, mid, temp);
		_MergrData(array, mid, right, temp);
		MergrData(array, left, mid, right, temp);
		memcpy(array+left, temp+left, (right - left)*sizeof(array[0]));
	}

}



void MergeSort(int* array, int size)
{
	int* temp = (int*)malloc(sizeof(array[0])*size);
	MergeSort(array, 0, size, temp);


}



//�鲢���򣨷ǵݹ飩

void MergeSortNor(int* array, int size)
{
	int* temp = (int*)malloc(sizeof(array[0])*size);
	int gap = 1;

	while (gap<size)
	{

		for (int i = 0; i < size; i += 2 * gap)
		{
			int left = i;
			int mid = left + gap;
			int right = mid + gap;

			if (mid>size)
				mid = size;
			if (right>size)
				right = size;

			MergrData(array, left, right, temp);

		}
		memcpy(array, temp, sizeof(array[0]));
		gap *= 2;

	}
	free(temp);
}





/*
��������
֪�����ݵķ�Χ
���������ռ�

1.ͳ��������ÿ��Ԫ�ظ��������û��ṩ������Ϊ������±꣬����������1��
2.��Ԫ�ؽ��л���

ʱ�临�Ӷȣ�O��N��
�ռ临�Ӷȣ�O��N��
*/

void CountSort(int* array, int size)
{
	//1.�ҳ����ݷ�Χ---O��N��
	int minValue = array[0];
	int maxValue = array[0];
	for (int i = 0; i < size; ++i)
	{
		if (array[i]>maxValue)
			maxValue = array[i];
		if (array[i] < minValue)
			minValue = array[i];
	}
	//2.�������ڼ����ĸ����ռ�
	int range = maxValue - minValue + 1;
	int* temp = (int*)malloc(sizeof(int)*range);
	assert(temp);
	memset(temp, 0, sizeof(int)*range);
	//3.ͳ��ÿ��Ԫ�س��ֵĴ���
	for(int i = 0; i < size; ++i)
	{
		temp[array[i] - minValue]++;
	}
	//4.�����ݽ��л���
	int index = 0;
	for (int i = 0; i < range; ++i)
	{
		int count = temp[i];
		while (count--)
			array[index++] = i + minValue;
	}

	free(temp);

}

