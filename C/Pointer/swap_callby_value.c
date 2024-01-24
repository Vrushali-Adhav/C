/*program name: swaping using Call by value fun
programmer name:vrushali Abasaheb Adhav
Date: 20 Jan 2022*/
#include<stdio.h>
void swap(int,int);
int main(void)
{
	int num1,num2;
	printf("enter first number: ");
	scanf("%d",&num1);
	
	printf("enter second number: ");
	scanf("%d",&num2);
	printf("before swapping \n\n");
	printf("num1 = %d\t num2= %d\n",num1,num2);
	swap(num1,num2);
	printf("\n after swapping \n");
	printf("num1 = %d\t num2= %d\n",num1,num2);
	return 0;
}
void swap(int num1,int num2)
{
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
}

 
