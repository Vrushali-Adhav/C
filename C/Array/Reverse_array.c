/*Program Name    :Print Array in reverse order
 Programmers Name :Adhav Vrushali Abasaheb
 Date             :26 sep 2022*/
#include<stdio.h>
#define size 10
int main()
{
	int num;
	printf("enter how many numbers you want in array\t" );
	scanf("%d",&num);
	//exception
	if(num<=0 || num>=size)
	{
		printf("Invalid Input");
	}
	int arr[num],i;
	//Accept array value from user
	for(i=0;i<num;i++)
	{
		printf("enter value for arr[%d]  ",i);
		scanf("%d",&arr[i]);
	}
	
	//print array before reverse 
	printf("\n\nArray before Reverse\n\n");
	for(i=0;i<num;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	//print array after reverse
	printf("\n\nArray After Reverse\n");
	for(i=num-1;i>=0;i--)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	return 0;
}
