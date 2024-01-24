#include<stdio.h>
int main()
{
	int arr[5],i=0,add=0;
	printf("Enter Array values ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
     for(i=0;i<5;i++)
     {
     	printf("%d  ",arr[i]);
	 }
	 for(i=0;i<5;i++)
	 {
	 	add=add + arr[i];
	 }
	 printf("Addition = %d ",add);
	 return 0;
}

