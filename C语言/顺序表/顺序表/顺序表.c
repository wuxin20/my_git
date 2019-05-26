#define _CRT_SECURE_NO_WARNINGS 1
#include "顺序表.h"
#include <malloc.h>
#include <string.h>

//void SeqListInit(SeqList *ps);//初始化顺序表
void SeqListInit(SeqList *ps)
{
	assert(ps);
	ps->arr = (DataType *)malloc(sizeof(DataType)* 3);
	ps->capacity = 3;
	ps->size = 0;
}

//void SeqListDestroy(SeqList *ps);//释放空间
void SeqListDestroy(SeqList *ps)
{
	assert(ps);
	if (ps->arr)
	{
		free(ps->arr);
		ps->arr = NULL;
		ps->capacity = 0;
		ps->size = 0;
	}
}
//扩容
void CheckCapacity(SeqList *ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity * 2;
		DataType *ret = (DataType *)malloc(sizeof(DataType)* 6);
		if (ret == NULL)
		{
			assert(0);
			return;
		}
		memcpy(ret, ps->arr, ps->size*sizeof(DataType));
		free(ps->arr);
		ps->arr = ret;
		ps->capacity = newcapacity;
	}
}

//void SeqListPushBack(SeqList *ps, DataType data);//尾插
void SeqListPushBack(SeqList *ps, DataType data)
{
	assert(ps || data);
	CheckCapacity(ps);
	ps->arr[ps->size] = data;
	ps->size++;
}

//void SeqListPopBack(SeqList *ps);// 尾删
void SeqListPopBack(SeqList *ps)
{
	assert(ps);
	if (0 == ps->size)
	{
		printf("无法删除！\n");
		return;
	}
	ps->size--;
}

//
//void SeqListPushFront(SeqList *ps, DataType data);//头插
void SeqListPushFront(SeqList *ps, DataType data)
{
	assert(ps || data);
	CheckCapacity(ps);
	int i = 0;
	for (i = ps->size - 1; i >= 0; i++)
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[0] = data;
	ps->size++;
}

//void SeqListPopFront(SeqList *ps);//头删
void SeqListPopFront(SeqList *ps)
{
	assert(ps);
	if (0 == ps->size)
	{
		printf("无法删除！\n");
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//
//void SeqListInsert(SeqList *ps,int pos, DataType data);//任意位置插入
void SeqListInsert(SeqList *ps,int pos, DataType data)
{
	assert(ps || data);
	CheckCapacity(ps);
	int i = 0;
	for (i = ps->size - 1; i >= pos; i--)
	{
		ps->arr[i + 1] = ps->arr[i];
	} 
	ps->arr[pos] = data;
	ps->size++; 
}

//void SeqListErase(SeqList *ps,int pos);//任意位置删除
void SeqListErase(SeqList *ps,int pos)
{
	assert(ps );
	if (pos < 0 || pos>=ps->size )
	{
		printf("输入位置非法，无法删除！\n");
		return;
	}
	int i = 0;
	for (i = pos; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//
//int SeqListFind(SeqList *ps, DataType data);//检测data是否在顺序表中
int SeqListFind(SeqList *ps, DataType data)
{
	assert(ps || data);
	int i = 0;
	while (i<ps->size )
	{
		if (ps->arr[i] == data)
		{
			printf("在顺序表中，下标为:%d\n", i);
		}
		i++;
	}
	return 0;
}

//void SeqListRemove(SeqList *ps, DataType data);//移除顺序表中第一个值为data的数
void SeqListRemove(SeqList *ps, DataType data)
{
	assert(ps || data);
	int i = 0;
	while (ps->arr[i] != data)
	{
		i++;
	}
	int j = 0;
	for (j = i; j < ps->size-1; j++)
	{
		ps->arr[j] = ps->arr[j + 1];
	}
	ps->size--;
}

//void SeqListRemoveAll(SeqList *ps, DataType data);//移除顺序表中所有值为data的数
void SeqListRemoveAll(SeqList *ps, DataType data)
{
	assert(ps || data);
	int i = 0;
	/*while (i < ps->size)
	{
		if (ps->arr[i] == data)
		{
			int j = 0;
			for (j = i; j < ps->size - 1; j++)
			{
				ps->arr[j] = ps->arr[j + 1];
			}
			ps->size--;
		}
		i++;
	}*/
	int count = 0;
	for (i - 0; i < ps->size; i++)
	{
		if (ps->arr[i] == data)
			count++;
		else
			ps->arr[i - count] = ps->arr[i];
	}
	ps->size = ps->size - count;
	
}

//int SeqListSize(SeqList *ps);//获取顺序表中有效元素的个数
int SeqListSize(SeqList *ps)
{
	assert(ps);
	printf("顺序表中共有有效元素:%d个\n", ps->size);
	return 0;
}

//int SeqListCapacity(SeqList *ps);//获取顺序表的容量
int SeqListCapacity(SeqList *ps)
{
	assert(ps);
	printf("顺序表的容量为:%d\n",ps->capacity);
	return 0;
}

//int SeqListEmpty(SeqList *ps);//检测顺序表是否为空
int SeqListEmpty(SeqList *ps)
{
	assert(ps);
	if (ps->size == NULL)
		printf("顺序表为空\n");
	return 0;
}

//DataType SeqListFront(SeqList *ps);//获取顺序表中第一个元素
DataType SwqListFront(SeqList *ps)
{
	assert(ps);
	printf("顺序表的第一的元素为:%d\n", ps->arr[0]);
	return 0;
}

//DataType SeqListBack(SeqList *ps);//获取顺序表中最后一个元素
DataType SeqListBack(SeqList *ps)
{
	assert(ps);
	printf("顺序表的最后一个元素为:%d\n", ps->arr[ps->size - 1]);
	return 0;
}
