#define _CRT_SECURE_NO_WARNINGS 1
//1.�Զ������Ͳ���֪ʶдһƪ���͡�
//֪ʶ�㣺
//>�ṹ�����ʹ���
//>�ṹ���ʼ��
//>�ṹ���ڴ����
//>λ�Σ�λ�μ������С��
//>ö�� + ���ϡ�

//2.ʵ��һ��ͨѶ¼��
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
//�������Ա����䡢�绰��סַ
//�ṩ������
//1. �����ϵ����Ϣ
//2. ɾ��ָ����ϵ����Ϣ
//3. ����ָ����ϵ����Ϣ
//4. �޸�ָ����ϵ����Ϣ
//5. ��ʾ������ϵ����Ϣ
//6. ���������ϵ��
//7. ����������������ϵ��
//8. ������ϵ�˵��ļ�
//9. ������ϵ��

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
		printf("��ѡ��:\n");
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
				printf("�˳���\n");
				break;
			default:
				printf("ѡ�����������ѡ��:\n");
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