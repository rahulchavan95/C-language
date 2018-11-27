#include<stdio.h>

int display(int ar[],int s)
{
	int i,sum=0;
	printf("array elements are\n");
	for(i=0;i<s;i++)
	{	
		printf("%d\n",ar[i]);
		sum=sum+ar[i];
		
	}
	return sum;
}

int main()
{
	int arr[5],i,s,sum;
	s=(sizeof(arr)/sizeof(arr[0]));
	printf("size=%d\n",s);
	printf("enter array elements\n");		
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sum=display(arr,s);
	printf("total=%d\n",sum);
	
}	
