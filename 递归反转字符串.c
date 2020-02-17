#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//通过递归的方式。逆向打印
//递归和全局变量，把逆序的结果存入全局变量
//递归和非全局变量（递归指针函数参数）
char buff[1000];


void inverse02(char *p)
{
	if (p == NULL)	//递归调用的
	{
		return;
	}
	if (*p == '\0')
	{
		return;
	}
	inverse02(p + 1);
	printf("%c", *p);


}
void inverse03(char* p)
{
	if (p == NULL)	//递归调用的
	{
		return;
	}
	if (*p == '\0')
	{
		return;
	}
	inverse03(p + 1);
	//printf("%c", *p);
	//strcat(buff, p);	//把指针所指的内存空间放入buff
	//strncpy(buff,p,1);
	strncat(buff, p, 1);
}






int main1()
{
	char buf[] = "abcdefg";
	//inverse02(buf);
	memset(buff,0,sizeof(buff));
	inverse03(buf);
	printf("buff:%s\n",buff);

	return 0;
}



void inverse04(char* p,char *bufresult)
{
	if (p == NULL||bufresult == NULL)	//递归调用的
	{
		return;
	}
	if (*p == '\0')
	{
		return;
	}
	inverse04(p + 1,bufresult);
	//printf("%c", *p);
	//strcat(buff, p);	//把指针所指的内存空间放入buff
	//strncpy(buff,p,1);
	//strncat(buff, p, 1);
	strncat(bufresult,p,1);
}

int main()
{
	char buf[] = "abcdefg";
	//inverse02(buf);
	memset(buff, 0, sizeof(buff));
	//inverse03(buf);
	//printf("buff:%s\n", buff);
	{
		char mybuf[1024] = { 0 };
		inverse04(buf,mybuf);
		printf("mybuf:%s\n", mybuf);

	}

	return 0;
}