#include<stdio.h>
#include<string.h>

int main()
{
	int no,rev,sum=0;
	printf("enter no\n");
	scanf("%d",&no);

	
	while(no>0)
	{
		rev=no%10;  
		sum=sum+rev;
		no=no/10;

	}
	printf("sum of digit=%d\n",sum);
}
