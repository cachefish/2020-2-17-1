#include<stdio.h>

void getmem2(char** p2)
{
	*p2 = 200;
	
}
void getmem1(char** p2)
{
	*p2 = 200;

}
void getmem3(char **myp1,int *mylen1,char **myp2,int *mylen2)
{ 
	int ret = 0;
	char* temp, * temp2;

	temp = (char*)malloc(10);
	strcpy(temp,"12324");
	*mylen1 = strlen(temp);
	*myp1 = temp;  //¶þ¼¶Ö¸Õë


	temp2 = (char*)malloc(10);
	strcpy(temp2, "1adsadsasd");
	*mylen2 = strlen(temp2);
	*myp2 = temp2;

	return ret;
}


int main01()
{
	/*char* p1 = NULL;
	char** p2 = NULL;

	p1 = 0x11;
	p2 = 0x22;


	p2 = &p1;
	*p2 = 100;
	printf("p1:%d\n", p1);
	getmem2(&p1);
	printf("p1:%d\n",p1);
	return 0;*/
	int ret = 0;

	char* p1 = NULL;
	int len1 = 0;
	char* p2 = NULL;
	int len2 = 0;

	getmem3(&p1, &len1, &p2, &len2);
	if (ret != 0)
	{
		printf("eror:%d\n",ret);
		return ret;
	}
	printf("p1:%s\n",p1);
	printf("p2:%s\n",p2);
	if (p1 != NULL)
	{
		free(p1);
		p1 = NULL;
	}
	if (p2 != NULL)
	{
		free(p2);
		p2 = NULL;
	}
	return 0;
}