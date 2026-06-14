//Aasigenment01
//write a program to check whether a person is eligible to vote (age>18>

#include<stdio.h>
int main()
{
	int age=18;
	
	printf("Enter a age");
	scanf("%d",&age);
	
	if (age>=18)
	{
		printf("%d Eligble age",age);
	}
	else
	{
		printf("%d not Eligble age",age);
	}
	 
	     return 0 ;
}