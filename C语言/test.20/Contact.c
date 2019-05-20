#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

void InitContact(Contact *pc)
{
	assert(pc);
	pc->sz = 0;
	//memset(pc->data, 0, sizeof(pc->data));
	pc->data = (PeoInfo*)malloc(3 * sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact use malloc:");
		exit(EXIT_FAILURE);
	}
	pc->capacitty = 3;

}

void AddContact(Contact *pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法添加！\n");
		return;
	}
	printf("请输入姓名:\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:\n");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:\n");
	scanf("%s", &(pc->data[pc->sz].sex));
	printf("请输入地址:\n");
	scanf("%s", &(pc->data[pc->sz].addr));
	printf("请输入电话:\n");
	scanf("%s", &(pc->data[pc->sz].tele));
	pc->sz++;
	printf("数据输入成功！\n");
}

void ShowContact(Contact *pc)
{
	int i = 0;
	assert(pc);
	printf("%10s\t% 5s\t%5s\t%10s\t%12s\n", "姓名", "年龄", "性别", "地址", "电话");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%10s\t%5d\t%5s\t%10s\t%12s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].addr,
			pc->data[i].tele);
	}
}

int SearchContact(Contact *pc)
{
	char name[NAME_MAX] = { 0 };
	printf("请输入姓名:\n");
	scanf("%s", name);
	int i = 0;
	if (strcmp(pc->data[i].name, name) )
	{
		printf("没找到！不存在！\n");
		return 0;
	}
	printf("%10s\t% 5s\t%5s\t%10s\t%12s\n", "姓名", "年龄", "性别", "地址", "电话");
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			printf("%10s\t%5d\t%5s\t%10s\t%12s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].addr,
				pc->data[i].tele);
			return 1;
		}
	}
	return 0;
}

void DelContact(Contact *pc)
{
	int pos = 0;
	int i = 0;
	if (pc->sz == 0)
	{
		printf("不能删除！\n");
		return;
	}
	pos = SearchContact(pc);
	if (pos )
	{
		printf("信息不存在！\n");
		return;
	}
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功！\n");
}