#include<stdio.h>

int main()
{
	char name[10];
	int i=0;
	int s=sizeof(name)/sizeof(name[0]);
	
	printf("enter string\n");
	scanf("%s",name);
	
	for(i=0;i<s;i++)
	{
		printf("%c",name[i]);
		
	}
}
	
