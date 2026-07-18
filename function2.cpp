//type2: without parameter , with return type

#include<stdio.h>

int addition()
{
	int a,b;
	
	printf("Enter two numbers : ");
	scanf("%d%d", &a,&b);
	
	return a+b;
}
int main()
{
	int result;
	
	result=addition();
	printf("sum=%d", result);
	
	
	return 0;
}