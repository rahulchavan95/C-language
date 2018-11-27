#include<stdio.h>

int main()
{
	int marks[]={10,20,30},i;
	int *point[3];

	for(i=0;i<3;i++)
	{
		printf("%d",marks[i]);
		point[i]=&marks[i];
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%d",*point[i]);
	}
	printf("\n");
}
