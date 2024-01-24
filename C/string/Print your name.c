#include<stdio.h>
int main()
{
	int num,i;
	
	printf("enter  characters present in your name \n");
	scanf("%d",&num);
	
	char crr[num];
	
	printf("enter %d characters = \n",num);

	for(i=0;i<num;i++)
	{
		scanf("%c",&crr[i]);
		
	}
	for(i=0;i<num;i++)
	{
		printf("%c",crr[i]);
	}
}
