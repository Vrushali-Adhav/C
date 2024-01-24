#include<stdio.h>
int main()
{
	int no1,no2;
	printf("enter first number = ");
	scanf("%d",&no1);
	printf("enter second number = ");
	scanf("%d",&no2);
	no1=no1+no2;
	no2=no1-no2;
	no1=no1-no2;
	printf("After swaping");
	printf("no1 = %d ",no1);
	printf("no2 = %d ",no2);
     return 0;	
}
