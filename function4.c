//type4: with parameter ,with return type

#include<stdio.h>

int addition(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    printf("sum=%d", addition(a, b));

    return 0;
}