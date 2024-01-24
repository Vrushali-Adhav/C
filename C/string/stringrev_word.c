/*c program to reverse string by word
    Programmer name : Vrushali Abasaheb Adhav
    Date: 7-1-2022*/
  #include<stdio.h>
  #include<string.h>
  int main()
  {
  	int i,len;
  	char arr[20]={'\0'};
    printf("enter your name to reverse\n");
    scanf("%[^\n]s",arr);
    printf("name before reverse : %s\n",arr);
    len=strlen(arr);
   for(arr[i]=0;arr[i]<=len-1;arr[i]++)
    {
	
    	if(arr[i]==' ')
    	{
    		strrev(arr[i]);
		}
		
	}
	printf("name after  reverse : %s\n",arr);
  //  strrev(arr)
    return 0;
	}  
