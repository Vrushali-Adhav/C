/*Program Name : Minimum,maximum values in Array and Even ,Odd numbers in Array.
Programmer's Name:Adhav Vrushali Abasaheb.
Programming Language : C programming Language.
Date                 :14 Nov 2022.
*/
#include<stdio.h>
int main()
{
	int arr[5],i,min=0,max=0;
	printf("enter values in array");
	for(i=0;i<5;i++)
	{
		printf("enter value of arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\n*****Array******\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n\n*****Maximum Number******\n\n");
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
			
		}
	}
	printf("Maximum Number : %d",max);
	printf("\n\n*****Minimum Number******\n\n");
	for(i=0;i<5;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
			
		}
	}
	printf("Minimum Number : %d",min);
	
	printf("\n\n*****Even Number******\n\n");
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d\n",arr[i]);
			
		}
	}
		printf("\n\n*****Odd Number******\n\n");
	for(i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d\n",arr[i]);
			
		}
	}
	
	
}
