/*program name :  Array to pointer
programmer name: Vrushali Abasaheb Adhav
Date           :20 Jan 2022*/
#include<stdio.h>
int main()
{
	
	int arr[5]={10,20,30,40,50};
	printf("%p\n",arr);//%p is used for hex value
	printf("%d\n",&arr);
	printf("%p\n",&arr[0]);
	int* ptr=&arr;
	printf("%d\n",ptr);
	return 0; 
}
