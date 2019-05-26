#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//��̬˳���
 /*
typedef struct SeqList
{
	int arr[10];
	int size;
};
*/

typedef int DataType;

typedef struct SeqList
{
	DataType *arr;
	int capacity;
	int size;
}SeqList;

void SeqListInit(SeqList *ps);//��ʼ��˳���
void SeqListDestroy(SeqList *ps);//�ͷſռ�
void SeqListPushBack(SeqList *ps, DataType data);//β��
void SeqListPopBack(SeqList *ps);// βɾ

void SeqListPushFront(SeqList *ps, DataType data);//ͷ��
void SeqListPopFront(SeqList *ps);//ͷɾ

void SeqListInsert(SeqList *ps, int pos, DataType data);//����λ�ò���
void SeqListErase(SeqList *ps, int pos);//����λ��ɾ��

int SeqListFind(SeqList *ps, DataType data);//���data�Ƿ���˳�����
void SeqListRemove(SeqList *ps, DataType data);//�Ƴ�˳����е�һ��ֵΪdata����
void SeqListRemoveAll(SeqList *ps, DataType data);//�Ƴ�˳���������ֵΪdata����
int SeqListSize(SeqList *ps);//��ȡ˳�������ЧԪ�صĸ���
int SeqListCapacity(SeqList *ps);//��ȡ˳��������
int SeqListEmpty(SeqList *ps);//���˳����Ƿ�Ϊ��

DataType SeqListFront(SeqList *ps);//��ȡ˳����е�һ��Ԫ��
DataType SeqListBack(SeqList *ps);//��ȡ˳��������һ��Ԫ��
