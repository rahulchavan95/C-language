#include<stdio.h>

int main()
{
	int arr[5],i,total;
	int *p;
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	p=arr;
	printf("elements are\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",*p);
		total=total+(*p);
		p++;
	}
	
	printf("\ntotal=%d\n",total);
}
