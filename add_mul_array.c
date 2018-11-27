#include<stdio.h>

int main()
{
	int arr1[5],arr2[5],arr3[5],i;
	int s=sizeof(arr1)/sizeof(arr1[0]);
	printf("enter 1st array elements\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr1[i]);
	}

	printf("enter 2nd array elements\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr2[i]);
	}

	
	for(i=0;i<s;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
	}
	
	
	printf("addition of two array is\n");
	for(i=0;i<s;i++)
	{
		printf("%d\n",arr3[i]);
	}
	
	for(i=0;i<s;i++)
	{
		arr3[i]=arr1[i]*arr2[i];
	}
	
	printf("Multiplication of two array is\n");
	for(i=0;i<s;i++)
	{
		printf("%d\n",arr3[i]);
	}
	
}
