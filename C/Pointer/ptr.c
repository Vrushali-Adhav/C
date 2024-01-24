#include<stdio.h>
int main()
{
	int no1=10;
	int no2=20;
	const int no3=30;
	
	int* ptr1=&no1;
	int* ptr2=&no2;
	const int* ptr3=&no3;
	
	int** ptr4=&ptr1;
	int** ptr5 = &ptr2;
	
	printf("%d\n",no1);
	printf("%d\n",ptr1);
	printf("%d\n",*ptr2);
	printf("%d\n",*ptr3);
	printf("%d\n",**ptr4);
	printf("%d\n",++(*ptr2));
	printf("%d\n",(*ptr1)--);
	printf("%d\n",--no1);
	ptr3 = 20;
	printf("%d\n",**ptr5);
	printf("%d\n",(**ptr5)++);
	printf("%d\n",&ptr3);
	printf("%d\n",&ptr5);
	printf("%d\n",++no2);
	//printf("%d\n",no3--);
	printf("%d\n",no1=no2+5);
	printf("%d\n",no1-no2);
	printf("%d\n",*ptr2+3);
//	no3=15;
	return 0;
	
}
