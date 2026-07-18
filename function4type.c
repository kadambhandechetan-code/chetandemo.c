//type1: without parameter , without return type 

#include<stdio.h>

void addition()
{
	int a,b;
	
	printf("Enter two numbers : ");
	scanf("%d%d", &a,&b);
	
	printf("sum=%d", a+b);
	
}

int main()
{
	addition();
	
	
	return 0;
}
