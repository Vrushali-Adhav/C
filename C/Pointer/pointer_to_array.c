#include<stdio.h>
int main()
{
	int arr[5] = {10,20,30,40,50};
	int* ptr1=&arr[0];
	int* ptr2 = &arr[1];
	printf("ptr1 = %d\n",*ptr1);
	printf("ptr2 = %d\n",*ptr2);
	
	printf("address of ptr1 = %d\n",ptr1);
	printf("address of ptr2 =%d\n",ptr2);
	return 0;
}

