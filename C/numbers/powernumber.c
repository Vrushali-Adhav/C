#include<stdio.h>
#include<math.h>
int main()
{
	int num1=0,num2=0,ans=0;
	printf("enter number = ");
	scanf("%d",&num1);
	printf("enter power =");
	scanf("%d",&num2);
	
	ans=pow(num1,num2);
	printf("Answer= %d",ans);
}
