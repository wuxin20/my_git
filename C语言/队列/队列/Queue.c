#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>

QNode* BuyQNode(QDataType data)
{
	QNode*pNewNode = (QNode*)malloc(sizeof(QNode));
	if (NULL == pNewNode)
	{
		saaert(0);
		return NULL;
	}
	pNewNode->data = data;
	pNewNode->pNext = NULL;

	return pNewNode;
}

void QueueInit(Queue* q)
{
	assert(q);
	q->front = q->rear = NULL;

}


#if 0
void QueuePush(Queue* q, QDataType data)
{
	QNode* pNewNode = NULL;
	assert(q);
	if (NULL == q->front)
	{
		q->front = q->rear = pNewNode;
	}
	else
	{
		q->rear->pNext = pNewNode;
		q->rear = pNewNode;
	}
}

void QueuePop(Queue* q)
{
	assert(q);
	if (NULL == q->front)
		return;
	else if (q->front == q->rear)
	{
		free(q->front);
		q->front = q->rear = NULL;
	}
	else
	{
		QNode* pDel = q->front;
		q->front = pDel->pNext;
		free(pDel);
	}
}

QDataType QueueFront(Queue* q)
{
	assert(q);
	return q->front->data;
}

QDataType QueueBack(Queue* q)
{
	assert(q);
	return q->rear->data;
}

int QueueSize(Queue* q)
{
	QNode* pCur = NULL;
	int count = 0;
	assert(q);
	pCur = q->front;
	while (pCur)
	{
		count++;
		pCur = pCur->pNext;
	}
	return count;
}

int QueueEmpty(Queue* q)
{
	assert(q);
	return NULL == q->front;
}

void QueueDestroy(Queue* q)
{
	QNode* pCur = NULL;
	assert(q);
	pCur = q->front;

	while (pCur)
	{
		q->front = pCur->pNext;
		free(pCur);
		pCur = q->front;
	}
	q->front = q->rear = NULL;
}

/*
int main()
{

	//TestQueue();
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);

	printf("size=%d\n", QueueSize(&q));
	printf("front=%d\n", QueueFront(&q));
	printf("rear=%d\n", QueueBack(&q));

	QueuePop(&q);
	QueuePop(&q);
	printf("size=%d\n", QueueSize(&q));
	printf("front=%d\n", QueueFront(&q));
	printf("rear=%d\n", QueueBack(&q));


	QueuePop(&q);
	QueuePop(&q);
	printf("size=%d\n", QueueSize(&q));
	printf("front=%d\n", QueueFront(&q));
	printf("rear=%d\n", QueueBack(&q));

	QueuePop(&q);
	printf("size=%d\n", QueueSize(&q));

	QueueDestory(&q);
	return 0;
}*/

void TestQueue()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);

	printf("size=%d\n", QueueSize(&q));
	printf("front=%d\n", QueueFront(&q));
	printf("rear=%d\n", QueueBack(&q));

	QueuePop(&q);
	QueuePop(&q);
	printf("size=%d\n", QueueSize(&q));
	printf("front=%d\n", QueueFront(&q));
	printf("rear=%d\n", QueueBack(&q));


	QueuePop(&q);
	QueuePop(&q);
	printf("size=%d\n", QueueSize(&q));
	printf("front=%d\n", QueueFront(&q));
	printf("rear=%d\n", QueueBack(&q));

	QueuePop(&q);
	printf("size=%d\n", QueueSize(&q));

	QueueDestory(&q);

}
#endif
