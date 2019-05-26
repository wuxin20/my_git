#define _CRT_SECURE_NO_WARNINGS 1
#include "Ë³Ðò±í.h"

int main()
{
	SeqList s;
	SeqListInit(&s);

	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 3);
	SeqListFind(&s, 1);
	//SeqListRemove(&s, 3);
	SeqListRemoveAll(&s, 3);
	SeqListSize(&s);
	SeqListCapacity(&s);
	SeqListEmpty(&s);
    SwqListFront(&s);
	SeqListBack(&s);

	SeqListDestroy(&s);
	system("pause");
	return 0;
}