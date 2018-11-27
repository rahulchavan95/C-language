#include<stdio.h>
#include<string.h>

int main()
{
	char name[10];
	int i=0;
	
	
	printf("enter string\n");
	scanf("%s",name);
	
	int s=sizeof(name);
	printf("%d\n",s);
	int size=strlen(name);
	printf("%d\n",size);
}
	
