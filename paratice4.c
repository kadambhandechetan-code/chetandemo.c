#include <stdio.h>

   int main()
   {
   	  int num1,num2,num3,num4,num5, sum;
   	  float avg;
    
      printf("Enter five numbers");
      scanf("%d%d%d%d%d", &num1 , &num2 , &num3 , &num4 , &num5 );
      
      sum= num1 + num2 + num3 + num4 + num5;
      avg= sum / 5.0;
      
      printf("Average=%.2f",avg);
      
      return 0;
   }