#include<stdio.h>
int main()
{
	int no=10;
	int *ptr = &no;
	int **iptr=&ptr;
	printf("&no = %d\n",&no);
	printf(" no = %d\n",no);
	printf("*ptr = %d\n",*ptr);
	printf("ptr = %d\n",ptr);
	printf("**ptr = %d\n",**iptr);
	printf("address= %d\n",sizeof(*ptr));
	return 0;
	
}
