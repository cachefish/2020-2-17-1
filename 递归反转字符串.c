#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//ͨ���ݹ�ķ�ʽ�������ӡ
//�ݹ��ȫ�ֱ�����������Ľ������ȫ�ֱ���
//�ݹ�ͷ�ȫ�ֱ������ݹ�ָ�뺯��������
char buff[1000];


void inverse02(char *p)
{
	if (p == NULL)	//�ݹ���õ�
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
	if (p == NULL)	//�ݹ���õ�
	{
		return;
	}
	if (*p == '\0')
	{
		return;
	}
	inverse03(p + 1);
	//printf("%c", *p);
	//strcat(buff, p);	//��ָ����ָ���ڴ�ռ����buff
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
	if (p == NULL||bufresult == NULL)	//�ݹ���õ�
	{
		return;
	}
	if (*p == '\0')
	{
		return;
	}
	inverse04(p + 1,bufresult);
	//printf("%c", *p);
	//strcat(buff, p);	//��ָ����ָ���ڴ�ռ����buff
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