#include<stdio.h>

int main()
{
	int arr1[5]={2,1,7,5,3};
	int arr2[5]={15,11,12,16,10};
	int arr3[10],i,j,k=0,temp;
	int s=sizeof(arr3)/sizeof(arr3[0]);	
	//printf("%d",s);
	
	for(i=0;i<s;i++)
	{
		arr3[i]=arr1[i];
		if(i>4)
		{
			arr3[i]=arr2[k];
			k++;
		}
		
	}
	
	printf("merged array is\n");
	for(i=0;i<s;i++)
	{
		printf("%d   ",arr3[i]);
	}
	printf("\n");
	
	for(i=0;i<s-1;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(arr3[j]<arr3[i])
			{
				temp=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=temp;
			}
		}
	}

	printf("sorted array is\n");
	
	for(i=0;i<s;i++)
	{
		printf("%d   ",arr3[i]);
	}
	printf("\n");

}

