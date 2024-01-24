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
	int brr[row][col];
	printf("****array value accepting for arr ********\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter value ");
			scanf("%d",&arr[i][j]);
		}
	}
	printf("****array value accepting for brr********\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter value ");
			scanf("%d",&brr[i][j]);
		}
	}
	int crr[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			crr[i][j]=arr[i][j]+brr[i][j];
		}
	}

	
	printf("*******Addition of two  matrix *********");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("arr[%d][%d]  = %d\n ",i,j,crr[i][j]);
		}
	}
	return 0;
}


