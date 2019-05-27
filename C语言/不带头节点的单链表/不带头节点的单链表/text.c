#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

int main()
{
	SList s;
	SListInit(&s);
	SListPushBack(&s, 1);
	SListPushBack(&s, 2);
	SListPushBack(&s, 3);
	SListPushBack(&s, 4);
	SListPushBack(&s, 5);

	Print(&s);

	SListPushFort(&s, 6);
	Print(&s);
	SlistPopFront(&s);

	SListInsertAfter(SListFind(&s,2), 7);
	SListErase(&s, 4);

	Print(&s);

	SListPopBack(&s);
	printf("链表第一个节点为:%d\n", *SListFront(&s));
	printf("链表的最后一个节点为:%d\n", *SListBack(&s));
	Print(&s);
	printf("链表有效节点的个数为:%d\n", SListSize(&s));

	SListDestroy(&s);
	system("pause");
	return 0;
}