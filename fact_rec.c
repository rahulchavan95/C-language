#include<stdio.h>

int fact(int);

int main()
{
	int a,ans;
	printf("a=");
	scanf("%d",&a);
	ans=fact(a);
	printf("factorial of %d is %d\n",a,ans);
}

int fact(int x)
{
	int f;
	if(x==0)
	{
		return 1;
	}
	else
	{
		f=x*fact(x-1);
	}
	return f;
} 
