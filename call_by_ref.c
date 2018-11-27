#include<stdio.h>

void disp(int* x);

int main()
{
	int a=100;
	disp(&a);
	printf("%d\n",a);
}

void disp(int* x)
{
	*x=*x+100;
}
