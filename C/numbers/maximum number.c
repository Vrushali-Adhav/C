#include<stdio.h>


int main()
{
	int no1,no2,no3;
	printf("Enter three values = ");
	scanf("%d %d %d",&no1,&no2,&no3);
	if(no1>no2&&no1>no3)
	{
		printf("NO1 is maximum Number ");
	}
	else if(no2>no3&&no2>no1)
	{
		printf("No2 is maximum");
	}
	else
	{
		printf("No3 is maximum");
	}
}
