#include<stdio.h>

int max(int a[],int n);

int main()
{
	int arr[5],s,i,ans;
	s=sizeof(arr)/sizeof(arr[0]);

	printf("enter array elements\n");
	for(i=0;i<s;i++)
	{	
		scanf("%d",&arr[i]);
	}
	
	ans=max(arr,s);
	printf("max=%d\n",ans);
}

int max(int a[],int n)
{
	int max,i;
	max=a[0];
	
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
