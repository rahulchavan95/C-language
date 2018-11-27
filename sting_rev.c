#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20],reverse[10];
	int i;
	
	printf("enter string\n");
	scanf("%s",str1);
	int size=strlen(str1);s
	for(i=0;i<size;i++)
	{
		reverse[size-i-1]=str1[i];
	}

	printf("reverse string = %s\n",reverse);
}
