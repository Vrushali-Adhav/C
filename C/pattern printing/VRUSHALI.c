/*program name :VRUSHALI pattern printing using c
Programmer Name: Adhav Vrushali Abasaheb
date :30-3-2022 */
#include<stdio.h>
int main()
{
	int i,j;
	
	printf("\n\n\n\n\n\n\n\n\n\n");

	for(i=0;i<5;i++)
	{
		for(j=0;j<61;j++)
		{
			if(i==0&&(j==0||j==8||j==12||j==13||j==14||j==15||j==19
			||j==21||j==25||j==26||j==27||j==28||j==29||j==33||
			j==36||j==50||j==56||j==57||j==58||j==59||j==60))
			{
				printf("*");
			}
			else if(i==1&&(j==1||j==7||j==12||j==15||j==19||
			j==21||j==25||j==33||j==36||j==43||j==50||
			j==58))
			{
					printf("*");
			}
			else if(i==2&&(j==2||j==6||j==12||j==13||j==14
			||j==15||j==19||j==21||j==25||j==26||j==27
			||j==28||j==29||j==33||j==34||j==35||j==36
			
			||j==42||j==44||j==50||j==58))
			{
					printf("*");
			}
			else if(i==3&&(j==3||j==5||j==12||j==14||j==19
			||j==21||j==29||j==33||j==36||j==41||j==42
			||j==43||j==44||j==45||j==50||j==58))
			{
					printf("*");
			}
			else if(i==4&&(j==4||j==12||j==15||j==19
			||j==20||j==21||j==25||j==26||j==27||j==28||j==29
			||j==33||j==36||j==40||j==46||j==50||j==51
			||j==52||j==56||j==57||j==58||j==59||j==60))
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
