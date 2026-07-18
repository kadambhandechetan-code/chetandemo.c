#include<stdio.h>
void add()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d%d", &a,&b);
    
    printf("addtion=%d\n",a+b);

}
void sub()
{
	int a,b;
	printf("Enetr two number:");
	scanf("%d%d", &a,&b);
	
	printf("subtraction=%d\n", a-b);
}
void mul()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d%d", &a,&b);
    
    printf("multiplication=%d\n", a*b);
}
int main()
{
	add();
	sub();
	mul();
	
	return 0;
}