//WAP Replace all Occurrences of ‘a’ with $ in a String

#include <stdio.h>

int main()
{
    char str[100]; int i;

    printf("Enter String : ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a')
        {
            str[i] = '$';
        }
    }

    printf("New String : %s", str);

    return 0;
}