/*Program Name:create an array of 10 integer element
               and display the sum of all elements.
 Programmers Name:Adhav Vrushali Abasaheb
 Date            :26 sep 2022*/              
			   
#include<stdio.h>
int main()
{
	int arr[10]={0};
	int i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("enter value for %d index\t\t\t",i);
		scanf("%d",&arr[i]);
	}
	printf("your array is\n");
	for(i=0;i<10;i++)
	{
	
		printf("%d\t",arr[i]);
	}
	for(i=0;i<10;i++)
	{
	
		sum = sum+arr[i];
	}
	printf("sum of given array is = %d ",sum);
	
	return 0;
	
}               
