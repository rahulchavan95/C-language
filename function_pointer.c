#include<stdio.h>
#include<string.h>

void add(int x,int y)	
{

	printf("sum=%d\n",x+y);
}

int main()
{
	void (*ptr)(int,int);
	int a=5;
	int b=10;

	ptr=add;
	//or use ptr=&add;
	
	ptr(a,b);
	//or use (*ptr)(a,b);
}


