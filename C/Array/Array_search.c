/*Program Name    :Program for searching value in an array
 Programmers Name :Adhav Vrushali Abasaheb
 Date             :27 sep 2022*/
 
#include<stdio.h>
int main()
{
	int arr[20],i,flag = 0,num,value;
	printf("************Enter how many values you want to store in array ***********");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		printf("enter value for arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("enter value which you want to search");
	scanf("%d",&value);
	for(i=0;i<num;i++)
	{
		if(arr[i]==value)
		{
			flag = 1;
			break;
		}
	}
	if(flag ==1)
	{
		printf("value found");
	}
	else
	{
		printf("value not found");
	}
	return 0;
}
