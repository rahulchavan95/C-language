#include<stdio.h>
#include<string.h>

int main()
{
	char str1[]="I am ";
	char str2[]="Rahul";
	char str3[10];
	//strcpy(str3,str2);
	//strcpy(str3,"Chavan");
	strncpy(str3,"Rahul",6);
	printf("%s\n",str3);
	strncpy(str3,"Rahul",2);
	str3[2]="\0";	
	//strcat(str1,str2);
	//strncat(str1,str2,5);	
	//printf("%s\n",str1);
	printf("%s\n",str3);
}
	
