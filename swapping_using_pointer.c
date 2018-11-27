#include<stdio.h>
#include<string.h>

int main()

{
	int a=10,b=20;
	printf("Before swapping\n");
	printf("a=%d  b=%d\n",a,b);
	swap(a,b);	
	//printf("After swapping\n");
	//printf("a=%d  b=%d\n",a,b);
	
}
/*
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
*/

void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("after swap\n");
	printf("a=%d  b=%d\n",x,y);
}
