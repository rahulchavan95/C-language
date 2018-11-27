#include<stdio.h>
#include<stdio.h>

int main()
{
	char ch;
	FILE *fp;
	char name[10];

	fp=fopen("rc.txt","r");
	fgets(name,6,fp);
	printf("%s",name);
}
	
