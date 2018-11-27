#include<stdio.h>

int main()
{
	int a[5],i,total=0;

	printf("enter elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		total=total+a[i];
	}
	printf("array elements are\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("total=%d\n",total);
}


