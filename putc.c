#include<stdio.h>
#include<stdio.h>

int main()
{
	char ch;
	FILE *fp;
	fp=fopen("rc.txt","w");
	
	printf("enter data\n");
	while((ch=getchar())!=EOF)
	{
		putc(ch,fp);
	}
	
	fclose(fp);

}
