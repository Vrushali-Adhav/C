/*Program Name    :2D Array Creation
 Programmers Name :Adhav Vrushali Abasaheb
 Date             :26 sep 2022*/
#include<stdio.h>
#define row 3
#define col 3
int main()
{
	int arr[row][col]={11,2,3,12,3,4,7,8,9};
	printf("******2D Array***********\n\n");
	printf("arr[0][0] = %d\n",arr[0][0]);
	printf("arr[0][1] = %d\n",arr[0][1]);
	printf("arr[0][2] = %d\n\n",arr[0][2]);
	
	printf("arr[1][0] = %d\n",arr[1][0]);
	printf("arr[1][1] = %d\n",arr[1][1]);
	printf("arr[1][2] = %d\n\n",arr[1][2]);
	
	printf("arr[2][0] = %d\n",arr[2][0]);
	printf("arr[2][1] = %d\n",arr[2][1]);
	printf("arr[2][2] = %d\n",arr[2][2]);
	
	return 0;
	
}
