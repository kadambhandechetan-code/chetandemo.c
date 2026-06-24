#include<stdio.h>
int main ()
{
	int A,B,C;
	
	
    printf("Enter three numbers: ");
    scanf("%d%d%d", &A, &B, &C);

    if (A > B)
    {
        if (A > C)
        {
            printf("A is greatest");
        }
        else
        {
            printf("C is greatest");
        }
    }
    else
    {
        if (B > C)
        {
            printf("B is greatest");
        }
        else
        {
            printf("C is greatest");
        }
    }

    return 0;
}