#define _CRT_SECURE_NO_WARNINGS 1
#include "˳���.h"
#include <malloc.h>
#include <string.h>

//void SeqListInit(SeqList *ps);//��ʼ��˳���
void SeqListInit(SeqList *ps)
{
	assert(ps);
	ps->arr = (DataType *)malloc(sizeof(DataType)* 3);
	ps->capacity = 3;
	ps->size = 0;
}

//void SeqListDestroy(SeqList *ps);//�ͷſռ�
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
//����
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

//void SeqListPushBack(SeqList *ps, DataType data);//β��
void SeqListPushBack(SeqList *ps, DataType data)
{
	assert(ps || data);
	CheckCapacity(ps);
	ps->arr[ps->size] = data;
	ps->size++;
}

//void SeqListPopBack(SeqList *ps);// βɾ
void SeqListPopBack(SeqList *ps)
{
	assert(ps);
	if (0 == ps->size)
	{
		printf("�޷�ɾ����\n");
		return;
	}
	ps->size--;
}

//
//void SeqListPushFront(SeqList *ps, DataType data);//ͷ��
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

//void SeqListPopFront(SeqList *ps);//ͷɾ
void SeqListPopFront(SeqList *ps)
{
	assert(ps);
	if (0 == ps->size)
	{
		printf("�޷�ɾ����\n");
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
//void SeqListInsert(SeqList *ps,int pos, DataType data);//����λ�ò���
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

//void SeqListErase(SeqList *ps,int pos);//����λ��ɾ��
void SeqListErase(SeqList *ps,int pos)
{
	assert(ps );
	if (pos < 0 || pos>=ps->size )
	{
		printf("����λ�÷Ƿ����޷�ɾ����\n");
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
//int SeqListFind(SeqList *ps, DataType data);//���data�Ƿ���˳�����
int SeqListFind(SeqList *ps, DataType data)
{
	assert(ps || data);
	int i = 0;
	while (i<ps->size )
	{
		if (ps->arr[i] == data)
		{
			printf("��˳����У��±�Ϊ:%d\n", i);
		}
		i++;
	}
	return 0;
}

//void SeqListRemove(SeqList *ps, DataType data);//�Ƴ�˳����е�һ��ֵΪdata����
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

//void SeqListRemoveAll(SeqList *ps, DataType data);//�Ƴ�˳���������ֵΪdata����
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

//int SeqListSize(SeqList *ps);//��ȡ˳�������ЧԪ�صĸ���
int SeqListSize(SeqList *ps)
{
	assert(ps);
	printf("˳����й�����ЧԪ��:%d��\n", ps->size);
	return 0;
}

//int SeqListCapacity(SeqList *ps);//��ȡ˳��������
int SeqListCapacity(SeqList *ps)
{
	assert(ps);
	printf("˳��������Ϊ:%d\n",ps->capacity);
	return 0;
}

//int SeqListEmpty(SeqList *ps);//���˳����Ƿ�Ϊ��
int SeqListEmpty(SeqList *ps)
{
	assert(ps);
	if (ps->size == NULL)
		printf("˳���Ϊ��\n");
	return 0;
}

//DataType SeqListFront(SeqList *ps);//��ȡ˳����е�һ��Ԫ��
DataType SwqListFront(SeqList *ps)
{
	assert(ps);
	printf("˳���ĵ�һ��Ԫ��Ϊ:%d\n", ps->arr[0]);
	return 0;
}

//DataType SeqListBack(SeqList *ps);//��ȡ˳��������һ��Ԫ��
DataType SeqListBack(SeqList *ps)
{
	assert(ps);
	printf("˳�������һ��Ԫ��Ϊ:%d\n", ps->arr[ps->size - 1]);
	return 0;
}
