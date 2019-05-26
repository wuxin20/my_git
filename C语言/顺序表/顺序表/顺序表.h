#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//静态顺序表
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

void SeqListInit(SeqList *ps);//初始化顺序表
void SeqListDestroy(SeqList *ps);//释放空间
void SeqListPushBack(SeqList *ps, DataType data);//尾插
void SeqListPopBack(SeqList *ps);// 尾删

void SeqListPushFront(SeqList *ps, DataType data);//头插
void SeqListPopFront(SeqList *ps);//头删

void SeqListInsert(SeqList *ps, int pos, DataType data);//任意位置插入
void SeqListErase(SeqList *ps, int pos);//任意位置删除

int SeqListFind(SeqList *ps, DataType data);//检测data是否在顺序表中
void SeqListRemove(SeqList *ps, DataType data);//移除顺序表中第一个值为data的数
void SeqListRemoveAll(SeqList *ps, DataType data);//移除顺序表中所有值为data的数
int SeqListSize(SeqList *ps);//获取顺序表中有效元素的个数
int SeqListCapacity(SeqList *ps);//获取顺序表的容量
int SeqListEmpty(SeqList *ps);//检测顺序表是否为空

DataType SeqListFront(SeqList *ps);//获取顺序表中第一个元素
DataType SeqListBack(SeqList *ps);//获取顺序表中最后一个元素
