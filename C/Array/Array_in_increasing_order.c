/*Program Name    :Sort Array in Increasing order
 Programmers Name :Adhav Vrushali Abasaheb
 Date             :26 sep 2022*/
#include<stdio.h>
#define size 20
int main()
{
	int num,i;
	printf("enter how many numbers you want to store in array : ");
	scanf("%d",&num);
	int arr[num];
	if(num<=0 || num>size)
	{
		printf("Invalid Input");
		return;
	}
	//Accept array values
	for(i=0;i<num;i++)
	{
		printf("enter value of arr[%d]  ",i);
		scanf("%d",&arr[i]);
	}
	//arrange array in increasing order
	int a,j;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<=num;j++)
		{
			if(arr[i]>arr[j])
			{
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}
	//print array which is in increasing order
	printf("\n\n******* Array in increasing order ******\n\n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
