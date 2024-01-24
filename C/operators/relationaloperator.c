/*program name:Relational Operators.
  Programmer's name:Adhav Vrushali Abasaheb
  Date             :4 Nov 2022
****Relational operators****
  1. equal-equal
  2.less than equal to
  3.greater than equal to
  4.less than 
  5.not equal to
  6.greater than
  operation return value 1 or 0 means true or false
*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a ");
	scanf("%d",&a);
	printf("enter value of b ");
	scanf("%d",&b);
	printf("\n\n\n\n");
	printf("a>b = %d\n\n",a>b);
	printf("a<b = %d\n\n",a<b);
	printf("a>=b = %d\n\n",a>=b);
	printf("a<=b = %d\n\n",a<=b);
	printf("a==b = %d\n\n",a==b);
	printf("a!=b = %d\n\n",a!=b);
	return 0;
	
}
