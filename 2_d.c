#include<stdio.h>

int main()
{
	int a[2][3],i,j,total=0;

	printf("enter elements\n");
	for(i=0;i<2;i++)
	{
	    for(j=0;j<3;j++)
	    {
		scanf("%d",&a[i][j]);
	    }
	}
	printf("array elements are\n");
	for(i=0;i<2;i++)
	{
	    for(j=0;j<3;j++)
	    {
		printf("%d",a[i][j]);
		total=total+a[i][j];
	    }
	    printf("\ntotal =%d",total);
	    total=0;
	    printf("\n");
	}
}
