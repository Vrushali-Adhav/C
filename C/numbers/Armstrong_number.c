/*Program Name :-
    c program for armstrong numbers
    Armstrong number : the sum of power of digit present
    present in number is again that number.
    153 = 3*3*3+5*5*5+1*1*1=153
    153 is armstrong number.
    Developer Name:- Vrushali Abasaheb Adhav.
    Date = 27 december 2021.*/
#include<stdio.h>
int main()
{
	int num,cnt=0,i,temp1,temp;
	int digit=0;
	printf("enter number");
	scanf("%d",&num);
	temp=num;temp1=num;
	while(num>0)
	{
		num = num/10;
		cnt++;
	}
//	printf("count = %d",cnt);
	int pow,rem;
	while(temp>0)
	{
		 pow=1,rem;
		rem = temp%10;
		for(i=0;i<cnt;i++)
		{
			pow = pow*rem;
			
		}
		
		digit = digit+pow;
		temp = temp/10;
		
	}
//	printf("digit = %d",digit);
	
	if(digit ==temp1)
	{
		printf("** Number is Armstrong **\n\n\n\n");
	}
	else
	{
		printf(" Number is not Armstrong \n\n\n\n");
	}
	return 0;
	
	
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
