
#include <stdio.h>

typedef int SDataType;

typedef struct Stack
{
	SDataType* array;
	int capacity;
	int top;    //±Íº«’ª∂•Œª÷√
}Stack;

void StackInit(Stack *ps);
void StackPush(Stack *ps,SDataType data);
void StackPop(Stack *ps);
SDataType StackTop(Stack *ps);
int StackSize(Stack *ps);
int StackEmpty(Stack *ps);
void StackDeatory(Stack *ps);




void TestStack();
