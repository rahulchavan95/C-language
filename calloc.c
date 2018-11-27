#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int *ptr,*p,i,sum=0,s;
	
	printf("enter size of array\n");
	scanf("%d",&s);
	
	ptr=(int *)calloc(s,sizeof(int));
	p=ptr;

	printf("enter array elements\n");
	for(i=1;i<=s;i++)
	{
		scanf("%d",ptr);
		sum=sum+(*ptr);
		ptr++;
	}
	printf("array elements are\n");
	for(i=1;i<=s;i++)
	{	printf("%u\n",p);
		printf("%d\t",*p);
		p++;
	}
	printf("\n");
	printf("sum=%d\n",sum);
}
