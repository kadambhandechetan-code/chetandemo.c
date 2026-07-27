//Write a program to scan string from user then scan a single character and search it
//in a accepted string.

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i;

    printf("Enter String : ");
    scanf("%s", str);

    printf("Enter Character : ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("Character Found");
            return 0;
        }
    }

    printf("Character Not Found");

    return 0;
} 