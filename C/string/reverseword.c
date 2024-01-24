#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100]={'\0'};
	char* ptr=arr;
	printf("enter string ");
	scanf("%[^\n]s",arr);
	printf("brfore reverse arr=%s\n",arr);
	int start=0;
	char temp;
	int end=strlen(arr)-1;
	while(start<=end)
	{
		temp=ptr[start];
		ptr[start]= ptr[end];
		ptr[end]=temp;
		start++;
		end--;
	}
	printf("after reverse =%s",arr);
	return 0;
}
