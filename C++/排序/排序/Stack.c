#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"
#include <assert.h>
#include <malloc.h>


void CheckCapacity(Stack* ps)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{

		//开辟新空间
		int newcap = ps->capacity * 2;
		SDataType* pTemp = (SDataType*)malloc(sizeof(SDataType)*newcap);
		if (NULL == pTemp)
		{
			assert(0);
			return;
		}

		//拷贝元素
		memcpy(pTemp, ps->array, ps->top *sizeof(SDataType));
		//或
		/*for (int i = 0; i < ps->top; i ++)
		{
		pTemp[i] = ps->array;
		}*/
		//释放旧空间
		free(ps->array);
		ps->array = pTemp;
		ps->capacity = newcap;
	}
}
void StackInit(Stack *ps)
{

	assert(ps);
	ps->array = (SDataType*)malloc(sizeof(SDataType)* 3);
	if (NULL == ps->array)
	{
		assert(0);
		return;
	}

	ps->capacity = 3;
	ps->top = 0;

}

void StackPush(Stack *ps, SDataType data)
{
	assert(ps);
	CheckCapacity(ps);
	ps->array[ps->top] = data;
	ps->top++;

}

void StackPop(Stack *ps)
{
	assert(ps);
	if (0 == ps->top)
		return;
	ps->top--;


}

SDataType StackTop(Stack *ps)
{
	assert(ps);
	return ps->array[ps->top - 1];

}

int StackSize(Stack *ps)
{
	assert(ps);
	return ps->top;

}

int StackEmpty(Stack *ps)
{
	assert(ps);
	return 0 == ps->top;

}

void StackDeatory(Stack *ps)
{
	assert(ps);
	if (ps->array)
	{
		free(ps->array);
		ps->array = NULL;
		ps->capacity = 0;
		ps->top = 0;
	}

}





void TestStack()
{
	Stack s;
	StackInit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	printf("top=%d,size=%d\n", StackTop(&s), StackSize(&s));
	StackPush(&s, 4);
	StackPush(&s, 5);
	printf("top=%d,size=%d\n", StackTop(&s), StackSize(&s));
	StackPop(&s);
	StackPop(&s);
	printf("top=%d,size=%d\n", StackTop(&s), StackSize(&s));
	StackDeatory(&s);
}