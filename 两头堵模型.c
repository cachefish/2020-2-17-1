#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main02()
{
	//求非空格的字符串长度
	int count = 0;
	char* p = "    abcdefg      ";
	int i, j = 0;
	i = 0;
	j = strlen(p)-1;
	while (isspace(p[i])&&p[i] != '\0')
	{
		i++;

	}
	while (isspace(p[j])&&p[j]!='\0' )
	{
		j--;
	}
	count = j - i + 1;

	printf("count:%d",count);



	return 0;
}
//求非空格的字符串长度
void  getCount(char *str,int*pcount )
{
	
	int count = 0;
	char* p = str;
	int i, j = 0;
	i = 0;
	j = strlen(p) - 1;
	if (str == NULL||pcount==NULL)
	{
		return -1;
	}
	while (isspace(p[i]) && p[i] != '\0')
	{
		i++;

	}
	while (isspace(p[j]) && p[j] != '\0')
	{
		j--;
	}
	count = j - i + 1;

	
	*pcount = count;

	return 0;
}

void main03()
{
	char* p = "       abcdefg        ";
	int num = 0;
	getCount(p, &num);
	printf("count:%d", num);

}