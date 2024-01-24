#include<stdio.h>
//#define komal 2
int main()
{
	int arr[10];//arr[40]={1,2,3,4}
int num,i;
printf("enter how ma nu u want");
scanf("%d",&num);//5
/*if(num>komal)
{
	return 0;
}*/
for(i=0;i<num;i++)
{
	printf("enter value : ");
	scanf("%d",&arr[i]);
}
printf("your array is\n");
for(i=0;i<num;i++)
{
	printf("\t%d",arr[i]);
}
/*int key;
printf("enter value to be search");
scanf("%d",&key);*/
return 0;
}
