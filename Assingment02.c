//Assingement
// Accept theree side of triangle from the user and determine whether the triangle is equilateral,isosceles,or scalene

#include<stdio.h>
int main()
{
	int sideA,sideB,sideC;
	

	printf("Enter side A:/n");
	scanf("%d", &sideA);
	
	printf("Enter side b:/n");
	scanf("%d", &sideB);
	
	printf("Enter side c:/n");
	scanf("%d", &sideC);

if ((sideA==sideB)&&(sideB==sideC))
{
	printf("this is Equilateral\n");
}
else if((sideA == sideB) || (sideB==sideC) || (sideA==sideC))
{
	printf("this is isosceles\n");
}
else
{
		printf("this is scalene\n");
}
   	
	return 0;
}
   
   
   
