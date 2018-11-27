#include<stdio.h>
#include<string.h>

struct student{
	char name[20];
	int roll;
};

int main()
{
	struct student stu;
	struct student *p;
	p=&stu;
	
	printf("enter student name:- \n");
	scanf("%s",p->name);
	printf("enter roll no:- \n");
	scanf("%s",&p->roll);	
	
	printf("name=%s\n",(*p).name);
	printf("roll no=%d\n",(*p).roll);
}
