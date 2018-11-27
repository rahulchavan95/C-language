#include<stdio.h>

struct student{
	int roll;
	char name[10];
};
int main()
{
	struct student stu[5];
	int i;
	int s=sizeof(stu)/sizeof(stu[0]);
	printf("enter student details\n");
	//printf("%d",s);

	for(i=0;i<s;i++)
	{
		printf("enter roll no for %d student\n",i+1);
		scanf("%d",&stu[i].roll);
		
		printf("enter name for %d student\n",i+1);
		scanf("%s",stu[i].name);
	}

	printf("student deatails\n");
	
	for(i=0;i<s;i++)
	{
		printf("roll no= %d student name=%s\n",stu[i].roll,stu[i].name);
		
	}
}	
	
