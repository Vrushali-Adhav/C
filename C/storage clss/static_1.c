#include<stdio.h>
int main()
{
	fun();
	fun();
	fun();
	return 0;
}
void fun()
{
	static int a=10;
	++a;
	printf("%d\n",a);
}
