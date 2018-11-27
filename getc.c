#include<stdio.h>
#include<stdio.h>

int main()
{
	char ch;
	FILE *fp;
	
	fp=fopen("rc.txt","r");
	printf("data of file\n");
	while(ch!=EOF)
	{
		ch=getc(fp);	
		printf("%c",ch);
		
	}

	fclose(fp);
}
