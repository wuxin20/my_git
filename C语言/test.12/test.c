#define _CRT_SECURE_NO_WARNINGS 1


//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
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
		ret = ret << 1; //左移一位，保存前一位		
		bit = value & 1; //取出最后一位		
		value = value >> 1;//值右移，取下一位		
		ret = bit | ret; //最后一位赋给ret
	} 	return ret; 
}

int main()
{ 	
	printf("%u\n",reverse_bit(25)); 
	system("pause");
	return 0; 
}


//2.不使用（a + b） / 2这种方式，求两个数的平均值。

#include<stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入需要操作的数字:");
	scanf("%d%d", &a, &b);
	c = (a + b) >> 1;
	printf("%d\n", c);
	system("pause");
}

//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

/*找出单独的数，就将数组中的每个数全都取异或运算，     
如：arr[1]={1,3,3,1,4}   
01^11=10，再用这个结果10^11=01,01^01=00,000^100=100=4   
独的数结果就为1    
（1）a=a^b    c^a相当于c^(a^b)     
（2）自己异或自己两次相当于没有异或，还是自己。*/ 


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
	printf("这个独数是:%d\n", arr[0]);
	system("pause");
	return 0;
}

//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
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
	//整体逆置    
	char *ret = str;   
	int len = strlen(str);    
	reverse_str(str, str + len - 1);  
	//单词逆置      
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
