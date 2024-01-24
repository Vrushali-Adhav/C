#include<stdio.h>
int main()
{
	int num,i,flag=0;
	
	printf("enter number");
	scanf("%d",&num);  //44
	
	for(i=2;i<=num/2;i++)  //i = 2 3
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
	{
		printf("Number is not prime");
	}
	else
	{
		printf("number is prime");
	}
	
	return 0;
}
