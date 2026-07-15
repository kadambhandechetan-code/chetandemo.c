//Print strong numbers in the given range 1 to n.
#include<stdio.h>

int main()
{
     int n;
     int i;
     int temp;
     int digit;
     int fact;
     int sum;
     int j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("strong numbers from 1 to %d are:\n", n);
    
   
  for(i = 1; i <= n; i++)
  {
    temp = i;
    sum = 0;

    while(temp > 0)
    {
        digit = temp % 10;

        fact = 1;

        for(j = 1; j <= digit; j++)
        {
            fact = fact * j;
        }

        sum = sum + fact;

        temp = temp / 10;
    }

    if(sum == i)
    {
        printf("%d ", i);
    }
}
    return 0;
}