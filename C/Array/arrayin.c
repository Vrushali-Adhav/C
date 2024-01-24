/* create 4*4 matrix ,accept the value from user and perform the addition
of all numbers*/
#include<stdio.h>
int main()
{
	int row=0,col=0;
	
	int i,j,addition;
	printf("enter how many row you want = ");
	scanf("%d",&row);
	printf("enter how many col you want = ");
	scanf("%d",&col);
	int arr[row][col];
	printf("****array value accepting********");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter value ");
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			addition = addition + arr[i][j];
		}
	}
	printf("*******Addition of matrix *********");
	printf("%d",addition);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("arr[%d][%d]  = %d\n ",i,j,arr[i][j]);
		}
	}
	return 0;
}

