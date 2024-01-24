#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,num;
	printf("enter value of number");
	scanf("%d",&num);
	
	while(c<=num)
	{
		printf("%d\n",c);
		c=a+b;
		a=b;
		b=c;
		
	}
	
}
