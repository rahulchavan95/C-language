#include<stdio.h>

int main()
{
	int n,temp,rev=0,r;
	printf("enter number\n");
	scanf("%d",&n);
	temp=n;

	while(temp>0)
	{
		r=temp%10;
		rev=(rev*10)+r;
		temp=temp/10;
	}
	printf("reverse =%d\n",rev);
	if(n==rev)
	{
		printf("Palindrome number\n");
	}
	else
	{
		printf("Not a Palindrome number\n");
	}
}
