#include<stdio.h>
int main()
{
	int a=10,b=20;
	{
		int a=5,c=18;
		printf("%d\t%d\t%d\t\n",a,b,c);
		{
			int b=25,d=30;
			printf("%d\t%d\t%d\t%d\t",a,b,c,d);
		}
		//printf("%d\t%d\t%d\t%d\t\n",a,b,c,d);
	}
//	printf("%d\t%d\t%d\t%d\t",a,b,c,d);
	return 0;
}
