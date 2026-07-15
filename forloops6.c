#include<stdio.h>
int main()
{
	int num,i;
	
	printf("Enter number");
	scanf("%d", &num);
	
	
  for(i = 2; i < num; i++)
	{
	
	   if(num % i == 0)
    	{
    		printf("not prime number");
    		
    		return 0;
		}
	
   	}
	
	printf("prime number");
	    
	     return 0;
	
}