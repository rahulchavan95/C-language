#include<stdio.h>
#include<string.h>

int main()
{
	int i,no,fact=1;

	printf("enter no\n");
	scanf("%d",&no);
	
	/*for(i=no;i>=1;i--)
	{
		fact=fact*i;
	}*/
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("%d\n",fact);
}
