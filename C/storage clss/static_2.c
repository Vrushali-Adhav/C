#include<stdio.h>
int f(int n)
{
	static int i=1;
	if(i>=5)
	{
		return n;
	}
	n=n+i;
	i++;
	return f(n);
}
int main()
{
	int s;
	s=f(1);
	printf("%d",s);
	return 0;
}


