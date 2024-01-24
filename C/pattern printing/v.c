/*Program Name:      c program to print v:
  programmer name :  Adhav Vrushali Abasaheb
  date            :  14 jan 2022*/

#include<stdio.h>
int main()
{
	int i,j,k,count=5;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==i)
			{
				printf("* ");
			}
			else if(i==0&&j==4||i==1&&j==3)
			{
				printf("*");
			}
		
			else 
			{
				printf(" ");
			}
		
        
      
	      }
	  
	  printf("\n");
	}
	

	
	return 0;
}
  
