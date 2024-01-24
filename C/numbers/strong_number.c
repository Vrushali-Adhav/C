/*c program for strong number*/
#include<stdio.h>
int strong(int);
int main()
{
	int num,ans;
	printf("Enter a  number = ");
	scanf("%d",&num);
	ans= strong(num);

	if(ans==num)
	{
		printf("%d is strong number",num);
	}
	else
	{
		printf("%d number is not strong number",num);
	}
	return 0;
}

int strong(int no)
{
	int i=1,digit,sum=0;
	
	
	while(no!=0)
	{
		digit=no%10;
	    int fact = 1;
		 for(i=1;i<=digit;i++)
		 {
		 	fact=fact*i;
		 	
		 }
		 
		 no=no/10;
		
		sum=sum+fact;
		 
	}
 	return sum;
}























































