#include<stdio.h>

int main()
{
    int choice, n, i, temp, digit;
    int rev = 0, sum = 0, flag;

    printf("========== MENU ==========\n");
    printf("1. Even or Odd\n");
    printf("2. Prime Number\n");
    printf("3. Palindrome Number\n");
    printf("4. Reverse Number\n");
    printf("5. Sum of Digits\n");
    printf("6. Positive, Negative or Zero\n");
    printf("7. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice != 7)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
    }

    switch(choice)
    {
        case 1:
            if(n % 2 == 0)
                printf("Even Number");
            else
                printf("Odd Number");
            break;

        case 2:
            flag = 1;

            if(n <= 1)
                flag = 0;

            for(i = 2; i <= n/2; i++)
            {
                if(n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag == 1)
                printf("Prime Number");
            else
                printf("Not Prime Number");

            break;

        case 3:
            temp = n;
            rev = 0;

            while(temp > 0)
            {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp = temp / 10;
            }

            if(rev == n)
                printf("Palindrome Number");
            else
                printf("Not Palindrome Number");

            break;

        case 4:
            temp = n;
            rev = 0;

            while(temp > 0)
            {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp = temp / 10;
            }

            printf("Reverse = %d", rev);

            break;

        case 5:
            temp = n;
            sum = 0;

            while(temp > 0)
            {
                digit = temp % 10;
                sum = sum + digit;
                temp = temp / 10;
            }

            printf("Sum of Digits = %d", sum);

            break;

        case 6:
            if(n > 0)
                printf("Positive Number");
            else if(n < 0)
                printf("Negative Number");
            else
                printf("Zero");

            break;

        case 7:
            printf("Program Ended");

            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}