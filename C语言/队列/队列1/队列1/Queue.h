#pragma once

typedef int QDataType;

typedef struct QListNode
{
	struct QListNode* pNext;
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* front;
	QNode* rear;
}Queue;

void QueueInit(Queue* q);
void QueuePush(Queue* q, QDataType data);
void QueuePop(Queue* q);
QDataType QueueFront(Queue* q);
QDataType QueueBack(Queue* q);
int QueueSize(Queue* q);
int QueueEmpty(Queue* q);
void QueueDestory(Queue* q);

void TestQueue();