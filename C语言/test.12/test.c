#define _CRT_SECURE_NO_WARNINGS 1


//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832

#include <stdio.h> 
#include <stdlib.h>
#include <math.h> 

unsigned int reverse_bit(unsigned int value) 
{     
	int ret = 0;    
	int bit = 0; 
	int i;   
	for( i=0; i < 32; i++) 	
	{        
		ret = ret << 1; //����һλ������ǰһλ		
		bit = value & 1; //ȡ�����һλ		
		value = value >> 1;//ֵ���ƣ�ȡ��һλ		
		ret = bit | ret; //���һλ����ret
	} 	return ret; 
}

int main()
{ 	
	printf("%u\n",reverse_bit(25)); 
	system("pause");
	return 0; 
}


//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

#include<stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("��������Ҫ����������:");
	scanf("%d%d", &a, &b);
	c = (a + b) >> 1;
	printf("%d\n", c);
	system("pause");
}

//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

/*�ҳ������������ͽ������е�ÿ����ȫ��ȡ������㣬     
�磺arr[1]={1,3,3,1,4}   
01^11=10������������10^11=01,01^01=00,000^100=100=4   
�����������Ϊ1    
��1��a=a^b    c^a�൱��c^(a^b)     
��2���Լ�����Լ������൱��û����򣬻����Լ���*/ 


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[] = { 1, 3, 3, 1, 4, 6, 4, 5, 5 };    
	int i = 0;    
	int len = sizeof(arr) / sizeof(arr[0]);               
	for (i = 1; i<len; i++)    
	{ 
		arr[0] = arr[0] ^ arr[i]; 
	}    
	printf("���������:%d\n", arr[0]);
	system("pause");
	return 0;
}

//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void reverse_str(char* left, char * right)
{   
	assert(left != NULL);   
	assert(right != NULL);  
	while (left < right)   
	{       
		char tmp = 0;      
		tmp = *left;      
		*left = *right;       
		*right = tmp;      
		left++;       
		right--;   
	}
} 

char* reverse(char* str)
{   
	//��������    
	char *ret = str;   
	int len = strlen(str);    
	reverse_str(str, str + len - 1);  
	//��������      
	while (*str != '\0')   
	{       
		char*start = str;    
		char*end = start;  
		while (*end != ' '&&(*end != '\0'))    
		{           
			end++;      
		}       
		reverse_str(start, end - 1);  
		if (*end != '\0')      
		{           
			str = end + 1;
		}     
		else     
		{         
			str = end;  
		}   
	}  
	return ret;
} 


int main()
{   
	char arr[] ="student a am i";  
	reverse(arr);   
	printf("%s\n", arr);  
	system("pause");  
	return 0;
}
