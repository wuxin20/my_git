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
	printf("�����һ���ڵ�Ϊ:%d\n", *SListFront(&s));
	printf("��������һ���ڵ�Ϊ:%d\n", *SListBack(&s));
	Print(&s);
	printf("������Ч�ڵ�ĸ���Ϊ:%d\n", SListSize(&s));

	SListDestroy(&s);
	system("pause");
	return 0;
}