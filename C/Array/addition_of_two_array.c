/*program name:sum of two array and store in 3rd one
  programmers name :Adhav Vrushali Abasaheb
  Date:26 sep 2022*/

#include<stdio.h>
int main()
{
	int arr[5]={0},i,j;
	int brr[5]={0};
	int crr[]={0};
	printf("enter array value for 1st array");
	for(i=0;i<5;i++)
	{
		printf("enter value for %d index\t\t\t",i);
		scanf("%d",&arr[i]);
	}
	printf("1st array is\n");
	for(i=0;i<5;i++)
	{
	
		printf("%d\t",arr[i]);
	}
	printf("\n");
	
	
	printf("enter array value for 2nd array");
	for(j=0;j<5;j++)
	{
		printf("enter value for %d index\t\t\t",j);
		scanf("%d",&brr[j]);
	}
	printf("2nd array is\n");
	for(j=0;j<5;j++)
	{
	
		printf("%d\t",brr[j]);
	}
	printf("\n");
	int sum=0;
	for(i=0;i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
		sum=sum+crr[i];
	}
	printf("sum of two array : %d",sum);
	return 0;
	
}
