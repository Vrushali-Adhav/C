#include<stdio.h>
int main()
{
	int no1,no2,temp;
	printf("Enter first number no1 = ");
	scanf("%d",&no1);
	printf("Enter second number no2 = ");
	scanf("%d",&no2);
	temp=no1;
	no1=no2;
	no2=temp;
     printf("No1 = %d",no1);
	 printf("No2 = %d",no2);
	 return 0;	
	
}
