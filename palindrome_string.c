#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10];
	char temp[10];
	char reverse[10];
	int len,i;	
	
	printf("enter a string\n");
	scanf("%s",str1);
	len=strlen(str1);
	
	strcpy(temp,str1);
	//printf("temp=%s\n",temp);
	
	for(i=0;i<len;i++)
	{
		reverse[len-i-1]=temp[i];
	}
	
	
	int cmp=strcmp(reverse,str1);
	printf("reverse =%s\n",reverse);
	printf("str1=%s\n",str1);
	if(cmp==0)
	{
		printf("string is palindrome\n");
	}
	else
	{
		printf("string is not palindrome\n");
	}
}	
	
