#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"


//void SListInit(SList *pl)//链表初始化
void SListInit(SList *pl)
{
	assert(pl);
	pl->pHead = NULL;
}

//void SListDestroy(SList *pl)//销毁链表
void SListDestroy(SList *pl)
{
	Node *pCur = NULL;
	assert(pl);
	pCur = pl->pHead;
	while (pCur)
	{
		pl->pHead = pCur->pNext;
		free(pCur);
		pCur = pl->pHead;
	}
	pl->pHead = NULL;
}
//开辟节点空间
Node *BuySListNode(SDataType data)
{
	Node *pNode = (Node *)malloc(sizeof(Node));
	if (NULL == pNode)
	{
		assert(0);
		return NULL;
	}
	else
	{
		pNode->data = data;
		pNode->pNext = NULL;

		return pNode;
	}
	
}

//void SListPushBack(SList *pl, SDataType data)//尾插
void SListPushBack(SList *pl,SDataType data)
{
	Node *pNewNode = NULL;
	Node *pCur = NULL;
	assert(pl);
	pNewNode = BuySListNode(data);
	pCur = pl->pHead;
	if (NULL == pl->pHead)
		pl->pHead = pNewNode;
	else
	{
		while (pCur->pNext)
		{
			pCur = pCur->pNext;

		}
		pCur->pNext = pNewNode;
	}
}

//void SListPopBack(SList *pl)//尾删
void SListPopBack(SList *pl)
{
	assert(pl);
	if (NULL == pl->pHead)
		return;
	else if (NULL == pl->pHead->pNext)
	{
		free(pl->pHead);
		pl->pHead = NULL;
	}
	else
	{
		Node *pTailNode = pl->pHead;
		Node *pPreTail = NULL;
		while (pTailNode->pNext)
		{
			pPreTail = pTailNode;
			pTailNode = pTailNode->pNext;
		}
		free(pTailNode);
		pPreTail->pNext = NULL;
	}
}

//void SListPushFront(SList *pl, SDataType data)//头插
void SListPushFort(SList *pl, SDataType data)
{
	Node *pNewNode = NULL;
	assert(pl || data);
	pNewNode = BuySListNode(data);
	pNewNode->pNext = pl->pHead;
	pl->pHead = pNewNode;
}

//void SListPopFront(SList *pl)//头删
void SlistPopFront(SList *pl)
{
	assert(pl);
	if (NULL==pl->pHead )
		return;
	else
	{
		Node *pDelNode = pl->pHead;
		pl->pHead = pDelNode->pNext;
		free(pDelNode);
	}

}

//void SListInsertAfter(Node *pos, SDataType data)//pos位置后插入data
void SListInsertAfter(Node *pos, SDataType data)
{
	Node *pNewNode = NULL;
	if (NULL == pos)
		return;
	pNewNode = BuySListNode(data);
	pNewNode->pNext = pos->pNext;
	pos->pNext = pNewNode;
}

//void SListErase(SList *pl, Node *pos)//删除链表中pos位置后的节点
void SListErase(SList *pl, Node *pos)
{
	Node *pPrePos = NULL;
	assert(pl);
	if (NULL == pl->pHead || NULL == pos)
		return;
	else if (pos == pl->pHead)
	{
		pl->pHead = pos->pNext;
		free(pos);
		return;
	}
}

//Node *SListFind(SList *pl, SDataType data)//在链表中查找data节点，找到返回地址，找不到返回空值
Node *SListFind(SList *pl, SDataType data)
{ 
	Node *pCur = pl->pHead;
	assert(pl);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	while (pCur)
	{
		if (pCur->data == data)
			return pCur;
		else
			pCur = pCur->pNext;
	}
	return NULL; 
}

//int SListSize(SList *pl)//获取链表中有效节点的个数
int SListSize(SList *pl)
{
	Node *pCur = NULL;
	int count = 0;
	assert(pl);
	pCur = pl->pHead;
	while (pCur)
	{
		count++;
		pCur = pCur->pNext;
	}
	return count;
}

//int SListEmpty(SList *pl)//检测链表是否为空

int SListEmpty(SList *pl)
{
	assert(pl);
	return NULL == pl->pHead;
}

//Node *SListFront(SList *pl)//获取链表的第一个节点
Node *SListFront(SList *pl)
{
	assert(pl);
	return pl->pHead;
}

//Node *SListBacK(SList *pl)//获取链表的最后一个节点
Node *SListBack(SList *pl)
{
	Node *pCur = NULL;
	assert(pl);
	assert(pl->pHead);
	pCur = pl->pHead;
	while (pCur->pNext)
	{
		pCur = pCur->pNext;
	}
	return pCur;
}

void Print(SList *pl)
{
	Node *pCur = NULL;
	assert(pl);
	pCur = pl->pHead;
	while (pCur )
	{
		printf("%d ", *pCur);
		pCur = pCur->pNext;
	}
	printf("\n");
}