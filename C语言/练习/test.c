#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
	int data;				//链表数据
	struct LNode* next;		//链表指针
}LNode, *LinkList;

typedef enum __bool 
{ 
	false = 0, 
    true = 1 
}bool;

/*头插法-建立单链表*/
LinkList HeadCreate(LinkList la)
{
	int num;
	la = (LinkList)malloc(sizeof(LNode));		//建立头结点	
	la->next=NULL;
	printf("请输入待操作数字，输入数字10时，会停止输入:>\n");
	scanf("%d",&num);	
	while(num!=10)	
	{		
		LNode *p=(LinkList)malloc(sizeof(LNode));		
		p->data=num;		
		p->next=la->next;		
		la->next=p;		
		scanf("%d",&num);
	}
	return la;
}
 

/*单链表遍历*/

void TravelList(LinkList la)
{
	LinkList p = la->next;
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("\n");
}


/*单链表插入操作*/
bool InsertList(LinkList la, int i, int e)
{	
	//在la链表中的i位置插入数值e
	int j=1;
	LinkList p=la,s;
	while(p && j<i)
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
		return false;
	if((s=(LinkList)malloc(sizeof(LNode)))==NULL)
		return false;
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
} 

/*单链表删除操作*/
bool DeleteList(LinkList la,int i)
{
	int j=1;
	LinkList p=la,q;
	while(p && j<i)	//p指向第i-1个元素
	{
		p=p->next;
		j++;
	}
	if(p==NULL || p->next==NULL) //表示不存在第i-1个和第i的元素
		return false;
	q=p->next;
	p->next=q->next;
	free(q);
	return true;
}
	
/*单链表的表长*/
int LengthList(LinkList la)
{
	int nLen = 0;
	LinkList p = la->next;
	while (p)
	{
		p = p->next;
		nLen++;
	}
	return nLen;
}

int main()
{
	int i = 0;
	int j = 0;
	int a = 0;
	LNode la;
	LinkList p;
	p = HeadCreate(&la);  //头插法创建单链表
	TravelList(p);
	printf("请输入需要插入的位置和元素:>\n");
	scanf("%d %d", &i, &j);
	InsertList(p,i,j);  //在链表的第i个位置插入元素j
	TravelList(p);
	printf("请输入需要删除的元素位置:>\n");
	scanf("%d", &a);
	DeleteList(p,a);  //删除链表的第3个元素
	TravelList(p);
	printf("链表的长度=%d\n", LengthList(p));
	system("pause");
	return 0;
}


int main()
{
	int i, j, t, a[10];
	printf("输入需要处理的数组:\n");
	for (i = 0; i<10; i++)
		scanf("%d", &a[i]);
	for (j = 0; j < 9; j++)
	{
		for (i = 0; i<9 - j; i++)
		if (a[i]>a[i + 1])
		{
			t = a[i]; a[i] = a[i + 1]; a[i + 1] = t;
		}
	}
	printf("处理后的数组:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
		
	system("pause");
	return 0;
}

