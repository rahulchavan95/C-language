#include<stdio.h>

int greater(int,int);
void disp(void);

int main()
{
	disp();
}

void disp(void)
{
	int a,b,ans;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	
	ans=greater(a,b);  //nesting of functuons
	
	printf("greater element=%d\n",ans);
}

int greater(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

/*Iterative

	n=5,fact=1
	for(i=1;i<=n;i++)
	  fact=fact*i;
*/
