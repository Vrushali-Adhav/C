/*Program Name    :Addition of 2Darray values
 Programmers Name :Adhav Vrushali Abasaheb
 Date             :26 sep 2022*/
#include<stdio.h>
#define size 2
#define row size
#define col size
int main()
{
	int i,j, arr[row][col];
	printf("enter values in 2D Array");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("enter value of arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
		
	}
	printf("\n\n*******Array*******\n\n");
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
				{
					printf(" arr[%d][%d] = %d\n",i,j,arr[i][j]);
					
				}
		
		}
		printf("\n\n******* Addition of 2D Array *******\n\n");
		int sum=0;
		
			for(i=0;i<size;i++)
				{
					for(j=0;j<size;j++)
						{
							sum = sum+arr[i][j];
					
						}
		
				}
		printf("Addition = %d",sum);
		return 0;
	
}
