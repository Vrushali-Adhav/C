/*Program Name    :Program to find second max element from array
 Programmers Name :Adhav Vrushali Abasaheb
 Date             :26 sep 2022*/


#include<stdio.h>

#define size 4
int main()
{
	int arr[size];
	printf("enter array value: \n");
	int i;
	for(i=0;i<size;i++)
	{
		printf("enter value of arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	int max1=0,max2=0;    
	for(i=0;i<size;i++)
	{
		max2 = max1;				
		if(arr[i]>max1)
		{
			max1 = arr[i];			
		}
	
	}
	printf("\n\n%d is second max ",max2);
}
