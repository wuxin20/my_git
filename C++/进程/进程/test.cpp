#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>


#if 0
int main()
{
	printf("pid:%d\n", getpid());
	printf("ppid:%d\n", getpppid());
	return 0;
}
#endif


#if 0
int mian()
{
	int ret = fork();
	printf("hello proc:%d!,ret:%d\n", getpid(), ret);
	return 0;
}
#ednif 

#if 0
int main()
{
	int ret = fork();
	if (ret < 0)
	{
		perror("fork");
		return 1;
	}
	else if (ret == = 0)
	{//child
		printf("I am child:%d!,ret:%d\n", getpid(), ret);
	}
	else
	{//fanther
		printf("I am fanther:%d!,ret:%d\n", getppid(), ret);
	}
	sleep(1);
	return 0;
}
#endif

#if 0

int main()
{
	pid_t id = fork();
	if (id < 0)
	{
		perror("fork");
		return 1;
	}
	else if (id > 0)
	{//parent
		printf("parent[%d] is sleeping...\n", getpid());
		sleep(30);
	}
	else
	{
		printf("child[%d] is begin Z...\n", getpid());
		sleep(5);
		exit(EXIT_SUCCESS);
	}
	return 0;
}
#endif

#if 0
int main(
{
	pid_t id = fork();
	if (id < 0)
	{
		perror("fork");
		return 1;
	}
	else if (id == 0)
	{//child
		printf("I an child,pid:%d\n", getpid());
		sleep(10);
	}
	else
	{//parent
		printf("I an parent,pid:%d\n", getpid());
		sleep(3);
		exit(0);
	}
	return 0;
}
#endif


/*********************************************************************/

//获取环境变量
#if 0
int main(int argc, char *argv[], char *env[])
{
	int i = 0;
	for (; env[i]; i++)
	{
		printf("%s\n", env[i]);
	}
	return 0;
}
#endif 


#if 0
int maiN(int argc, char *argv[])
{
	extern char **environ;
	int i = 0;
	for (; environ[i]; i++)
	{
		printf("%s\n", environ[i]);
	}
	return 0;
}
#endif


int main()
{
	printf("%s\n", grtenv("PATH"));
	return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       

