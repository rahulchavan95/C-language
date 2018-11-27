#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10];
	char str2[10];
	int v;
	
	printf("enter 1st string\n");
	scanf("%s",str1);
	printf("enter 2nd string\n");
	scanf("%s",str2);
	v=strcmp(str1,str2);
	if(v<0)
	{
		printf("str1 is less than str2\n");
	}
	else if(v>0)
	{
		printf("str1 is greater than str2\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}
}
