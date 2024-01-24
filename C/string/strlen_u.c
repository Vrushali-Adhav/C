#include<stdio.h>
int main()
{
	char arr[100]={'\0'};
	char* ptr=arr;
	int length=0;
	printf("enter string  ");
	scanf("%[^\n]s",arr);
	int i;
	printf("using pointer notation\n");
	for(i=0;*(arr+i)!='\0';i++)
	{
		length++;
	}
	
	printf("length of string = %d\n\n",length);
	printf("using array notation\n");
	length=0;
	for(i=0;ptr[i]!='\0';i++)
	{
		length++;
	}
		printf("length of string = %d\n\n",length);
	return 0;
	
	
}
