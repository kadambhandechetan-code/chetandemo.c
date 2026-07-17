//Print an inverted right-angled triangle pattern
//Input: n = 5

#include<stdio.h>

int main()
{
	int n,i,j;
	
	printf("Enter n: ");
	scanf("%d",&n);

 for(i = 1; i <= n; i++)
 {
	    for(j = i; j <=n; j++)
      
     	 printf("* ");
      
         printf("\n");
 }
 
     return 0;
    
}
  

