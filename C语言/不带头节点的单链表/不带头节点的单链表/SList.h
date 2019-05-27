#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <malloc.h>

typedef int SDataType;

typedef struct SListNode
{
	SDataType data;
	struct SListNode *pNext;
}Node;

typedef struct SList
{
	Node *pHead;
}SList;

void SListInit(SList *pl);//�����ʼ��

void SListDestroy(SList *pl);//��������

void SListPushBack(SList *pl, SDataType data);//β��
void SListPopBack(SList *pl);//βɾ

void SListPushFront(SList *pl, SDataType data);//ͷ��
void SListPopFront(SList *pl);//ͷɾ

void SListInsertAfter(Node *pos, SDataType data);//posλ�ú����data
void SListErase(SList *pl, Node *pos);//ɾ��������posλ�ú�Ľڵ�

Node *SListFind(SList *pl, SDataType data);//�������в���data�ڵ㣬�ҵ����ص�ַ���Ҳ������ؿ�ֵ
int SListSize(SList *pl);//��ȡ��������Ч�ڵ�ĸ���
int SListEmpty(SList *pl);//��������Ƿ�Ϊ��
Node *SListFront(SList *pl);//��ȡ����ĵ�һ���ڵ�
Node *SListBack(SList *pl);//��ȡ��������һ���ڵ�