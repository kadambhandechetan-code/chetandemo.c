//type3: with parameter,without return type

#include<stdio.h>

void addition(int a,int b)
{
	printf("sum=%d",a+b);
	
}
int main()
{
	int a,b;
	
	printf("Enter two numbers : ");
	scanf("%d%d", &a,&b);
	
	addition(a,b);
	
	return 0;
}