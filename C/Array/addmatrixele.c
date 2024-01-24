#include<stdio.h>
int main()
{
	int row=0,col=0,i,j,add=0;
    printf("enter row ");
	scanf("%d",&row);
	printf("enter how col ");
	scanf("%d",&col);
	int arr[row][col];
	//printf("********value accept********\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		   add=add+	arr[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("arr[%d][%d] = %d",i,j,arr[i][j]);
		}
	}
	
	return 0;
}
