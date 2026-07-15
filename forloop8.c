//Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong

#include<stdio.h>
int main()
{
	int n,i;
	int temp;
	int sum=0;
	int digit;
	int fact;
	
	printf("Enter number");
	scanf("%d",&n);
	
	temp=n;
	
		
   while(temp > 0)
   {
   	
   	digit = temp % 10;

   	fact=1;
   	
     	for(i = 1; i <=digit; i++)
    	{
   		fact = fact * i;
	    }
   	 
   	sum=sum + fact;
   	
   	 temp = temp / 10;
	
   }
   if(sum==n)
   	     	printf("strong number");
   else
   	    	printf("not strong number");
   
        return 0;
}