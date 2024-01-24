/*program name:Arithmetic Operators.
  Programmer's name:Adhav Vrushali Abasaheb
  Date             :4 Nov 2022
  Arithmetic operators:
  1.Addition
  2.Substraction
  3.multiplication
  4.Division
  5.module
   
*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a = ");
	scanf("%d",&a);
	printf("enter value of b = ");
	scanf("%d",&b);
//	Addition
	int c = a+b;
	printf("Addition of a and b is %d\n\n\n",c);
//	substration
	int d = a-b;
	printf("Substraction of a and b is %d\n\n\n",d);
//	Multiplication
	int g = a*b;
	printf("multiplication of a and b is %d\n\n\n",g);
//	Division
	int h = a/b;
	printf("Division of a and b is %d\n\n\n\n",h);
//	module
	int k;
	k=a%b;
	printf("module of a and b is %d\n\n\n\n\n\n",k);
	return 0;
}
