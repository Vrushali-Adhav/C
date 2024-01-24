/*Program Name :Pallindrome Number.
Programmer's Name:Adhav Vrushali Abasaheb
Programming Language:C programming Language.
*/
#include<stdio.h>
int main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	int temp =num;
	int rev=0;
//	first find reverse number
	while(num!=0)
	{
     	rev = rev*10 +num%10;
		num=num/10;
		
	}
	//now check reverse number with temp 
	if(rev==temp)
	{
		printf("number is palindrome");
	}
	else
	{
		printf("number is not palindrome");
	}
	
}
