/*c program for finding middle element
 Develope name : Vrushali Abasaheb Adhav
 Date :29-12-2021*/


#include<stdio.h>
int main()
{
	int no1,no2,no3;
	printf("enter  numbers =");
	scanf("%d",&no1);
	printf("enter  numbers =");
	scanf("%d",&no2);
	printf("enter  numbers =");
	scanf("%d",&no3);
	if((no1>no2&&no1<no3)||(no1<no2&&no1>no3))//65 77 90
	{
		printf("%d is middle",no1);
	}
	else if((no2>no1&&no2<no3)||(no2<no1&&no2>no3))// 2 11 33
      {
      	printf("%d is middle",no2);
	  }
	  else
	  {
	  	printf("%d is middle",no3);
	  }

	return 0;
}
