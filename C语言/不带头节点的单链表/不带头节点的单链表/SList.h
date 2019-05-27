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

void SListInit(SList *pl);//链表初始化

void SListDestroy(SList *pl);//销毁链表

void SListPushBack(SList *pl, SDataType data);//尾插
void SListPopBack(SList *pl);//尾删

void SListPushFront(SList *pl, SDataType data);//头插
void SListPopFront(SList *pl);//头删

void SListInsertAfter(Node *pos, SDataType data);//pos位置后插入data
void SListErase(SList *pl, Node *pos);//删除链表中pos位置后的节点

Node *SListFind(SList *pl, SDataType data);//在链表中查找data节点，找到返回地址，找不到返回空值
int SListSize(SList *pl);//获取链表中有效节点的个数
int SListEmpty(SList *pl);//检测链表是否为空
Node *SListFront(SList *pl);//获取链表的第一个节点
Node *SListBack(SList *pl);//获取链表的最后一个节点