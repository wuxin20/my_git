#define _CRT_SECURE_NO_WARNINGS 1
//1.自定义类型部分知识写一篇博客。
//知识点：
//>结构体类型创建
//>结构体初始化
//>结构体内存对齐
//>位段，位段计算机大小。
//>枚举 + 联合。

//2.实现一个通讯录；
//通讯录可以用来存储1000个人的信息，每个人的信息包括：
//姓名、性别、年龄、电话、住址
//提供方法：
//1. 添加联系人信息
//2. 删除指定联系人信息
//3. 查找指定联系人信息
//4. 修改指定联系人信息
//5. 显示所有联系人信息
//6. 清空所有联系人
//7. 以名字排序所有联系人
//8. 保存联系人到文件
//9. 加载联系人

#include "Contact.h"


void menu()
{
	printf("**********************************\n");
	printf("*****   1.add       2.del    *****\n");
	printf("******  3.search    4.modify *****\n");
	printf("******  5.show      6.empty  *****\n");
	printf("******  7.sort      0.exit   *****\n");
	printf("**********************************\n");
}

enum Option
{
	EXIT, ADD, DEL, SEARCH, MODIFY, SHOW, EMPTY, SORT
};

void text()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch(input)
		{
			case ADD:
				AddContact(&con);
				break;
			case DEL:
				DelContact(&con);
				break;
			case SEARCH:
				SearchContact(&con);
				break;
			case MODIFY:
				//ModifyContact(&con);
				break;
			case SHOW:
				ShowContact(&con);
				break;
			case EMPTY:
				//EmptyContact(&con);
				break;
			case SORT:
				//SortContact(&con);
				break;
			case EXIT:
				printf("退出！\n");
				break;
			default:
				printf("选择错误！请重新选择:\n");
				break;
		}

	} while (input);

}

int main()
{
	text();
	system("pause");
	return 0;
}