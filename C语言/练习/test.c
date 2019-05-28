#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
	int data;				//��������
	struct LNode* next;		//����ָ��
}LNode, *LinkList;

typedef enum __bool 
{ 
	false = 0, 
    true = 1 
}bool;

/*ͷ�巨-����������*/
LinkList HeadCreate(LinkList la)
{
	int num;
	la = (LinkList)malloc(sizeof(LNode));		//����ͷ���	
	la->next=NULL;
	printf("��������������֣���������10ʱ����ֹͣ����:>\n");
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
 

/*���������*/

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


/*������������*/
bool InsertList(LinkList la, int i, int e)
{	
	//��la�����е�iλ�ò�����ֵe
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

/*������ɾ������*/
bool DeleteList(LinkList la,int i)
{
	int j=1;
	LinkList p=la,q;
	while(p && j<i)	//pָ���i-1��Ԫ��
	{
		p=p->next;
		j++;
	}
	if(p==NULL || p->next==NULL) //��ʾ�����ڵ�i-1���͵�i��Ԫ��
		return false;
	q=p->next;
	p->next=q->next;
	free(q);
	return true;
}
	
/*������ı�*/
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
	p = HeadCreate(&la);  //ͷ�巨����������
	TravelList(p);
	printf("��������Ҫ�����λ�ú�Ԫ��:>\n");
	scanf("%d %d", &i, &j);
	InsertList(p,i,j);  //������ĵ�i��λ�ò���Ԫ��j
	TravelList(p);
	printf("��������Ҫɾ����Ԫ��λ��:>\n");
	scanf("%d", &a);
	DeleteList(p,a);  //ɾ������ĵ�3��Ԫ��
	TravelList(p);
	printf("����ĳ���=%d\n", LengthList(p));
	system("pause");
	return 0;
}


int main()
{
	int i, j, t, a[10];
	printf("������Ҫ���������:\n");
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
	printf("����������:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
		
	system("pause");
	return 0;
}

