#include<stdio.h>
int power(int,int);
int main()
{
	int num1=0,num2=0,ans=0;
	printf("enter number = ");
	scanf("%d",&num1);
	printf("enter power =");
	scanf("%d",&num2);
	
	ans=power(num1,num2);
	printf("Answer= %d",ans);
	
}
int power(int num1,int num2)
{
	int i=0,pow=1;
	for(i=0;i<num2;i++)
	{
		pow= pow*num1;
	}
	return pow;
}
