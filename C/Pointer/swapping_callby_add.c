/*Program Name: Swapping by call by address
Programmer Name:Vrushali Abasaheb.
Date:20 Jan 2022*/
#include<stdio.h>
void swap(int*,int*);
int main(void)
{
	int num1,num2;
	printf("enter first number: ");
	scanf("%d",&num1);
	printf("enter second number:  ");
	scanf("%d",&num2);
	printf("\n\n**Before Swapping**\n");
	printf("num1=%d\t num2=%d\n\n",num1,num2);
	swap(&num1,&num2);
	printf("**After swapping\n");
	printf("num1=%d\t  num2=%d\n",num1,num2);
	return 0;
}
void swap(int* no1,int* no2)
{
	int temp;
	temp=*no1;
	*no1=*no2;
	*no2=temp;
	return;
}




