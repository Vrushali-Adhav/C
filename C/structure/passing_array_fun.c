#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name;
	int marks;
};
void display(struct student[]);
int main()
{
	struct student arr[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("enter roll no: ");
		scanf("%d",&arr[i].rno);
		
		printf("enter name : ");
		scanf("%s",&arr[i].name);
		
		printf("enter marks: ");
		scanf("%d",&arr[i].marks);
	}
	for(i=0;i<3;i++)
	{
		printf("Roll no= %d\n",arr[i].rno);
		printf("hi");
		printf("name = %s\n",arr[i].name);
		printf("marks = %d\n",arr[i].marks);
		
		
	}
	display(arr);
	return 0;
}
void display(struct student arr[])
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Roll no= %d\n",arr[i].rno);
		printf("hi");
		printf("name = %s\n",arr[i].name);
		printf("marks = %d\n",arr[i].marks);
		
		
	}
}
