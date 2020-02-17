#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int inverse11(char* str1)
{
	int length;
	char* p1;
	char* p2;
	if (str1 == NULL)
	{
		return  -1;
	}
	length = strlen(str1);
	p1 = str1;
	p2 = str1 + length - 1;

	while (p1<p2)
	{
		char c = *p1;
		*p1 = *p2;
		*p2 = c;
		++p1;
		--p2;
	}
}
void main04()
{	
	char buf[] = "abcdefg";
	int length = strlen(buf);
	inverse11(buf);
	printf("buf:%s\n",buf);



	return 0;
}