//assignment 0
// 2 write a c program to find the area of a circle.

#include<stdio.h>
   int main(){
   
   float radius, area;
   
   printf("Enetr Radius:");
   scanf("%f",&radius);
   
   area = 3.14 *radius*radius;

   printf("Area=%f", area);
   
   return 0;
}