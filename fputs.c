#include<stdio.h>
#include<stdio.h>

int main()
{
	char ch;
	FILE *fp;
	char name[10];

	fp=fopen("rc.txt","w");
	
	fputs("rahul",fp);
	fclose(fp);
}
