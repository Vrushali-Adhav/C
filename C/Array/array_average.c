/*Program Name:create an array of 10 integer element
               and display the sum of all elements*/
#include<stdio.h>
int main()
{
	int arr[10]={0};
	int i,sum=0,average;
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
		average=sum/10;
	}
	printf("sum of given array is = %d ",average);
	
	return 0;
	
}               
