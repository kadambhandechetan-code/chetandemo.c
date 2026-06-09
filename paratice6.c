// Assingment 0
//write a C program to input the length and width of rectangel and find its perimeter

#include<stdio.h>
   int main()
   {
   	
   	float length,width,perimeter;
   	 
   	printf("Enter length");
   	scanf("%f", &length);
   	 
   	printf("Enter width");
   	scanf("%f", &width);
   	 
   	perimeter= 2* (length+width);
   	 
   	printf("%f",perimeter);
	printf("perimeter=%f",perimeter);
   	 
   	 
   	return 0;
	
  }