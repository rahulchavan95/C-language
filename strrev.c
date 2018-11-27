#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10];
	char str2[10];

	printf("enter string\n");
	scanf("%s",str1);
	
	strrev(str1);
	printf("%s\n",str1);
}
