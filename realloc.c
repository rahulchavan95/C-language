#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int *p,*ptr,*q,*n_ptr,i,s,ns,sum=0;
	
	printf("enter size\n");
	scanf("%d",&s);

	ptr=(int *)malloc(s*sizeof(int));
	p=ptr;
	printf("allocated memory= %u\n",p);
	
	printf("enter array elements\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",ptr);
		sum=sum+*ptr;
		ptr++;
	}
	printf("array elements are\n");
	for(i=0;i<s;i++)
	{
		printf("%d\t",*p);
		p++;
	}
	printf("sum = %d\n",sum);

	printf("reallocation\n");
	
	printf("enter size\n");
	scanf("%d",&s);
	n_ptr=(int *)realloc(ptr,s*sizeof(int));
	q=n_ptr;
	printf("allocated memory= %u\n",n_ptr);
	
	printf("enter array elements\n");
	for(i=0;i<=s;i++)
	{
		scanf("%d",n_ptr);
		sum=sum+*n_ptr;
		ptr++;
	}
	printf("array elements are\n");
	for(i=0;i<=s;i++)
	{
		printf("%d\t",*q);
		q++;
	}
	printf("sum = %d\n",sum);
	
}

	
