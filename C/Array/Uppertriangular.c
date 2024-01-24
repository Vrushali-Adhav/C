/*Program Name    : Program to check matrix is upper triangular matrix or not.
					Upper triangular matrix is a special square matrix whose all 
					elements below the diagonal is zero.
 Programmers Name :Adhav Vrushali Abasaheb
 Date             :26 sep 2022*/

#include<stdio.h>
#define size 3
#define row size
#define col size
int main()
{
	int arr[row][col],i,j;
	printf("enter array values : ");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("enter value of arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("***** Array *****");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\n",arr[i][j]);
		}
	}
	
	//uppertriangular
	int flag =1;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i<j )
			{
				if(arr[i][j]==0)
				{
					flag = 0;
				}
				
			}
		}
	}
	if(flag == 0)
	{
		printf("\n\nArray is upperTriangular");
	}
	else
	{
		printf("array is not upper triangular");
	}
	return 0;
}
