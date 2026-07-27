//WAP to Take in a String and Replace Every Blank Space with special symbol.

#include<stdio.h>

int main()
{
	char str[100];
	int i;
	
	printf("Enter a String : ");
	fgets(str, sizeof(str), stdin);
	
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
		{
			str[i] = '*';  // Replace space with *
		}
	}
	
	printf("New String : %s", str);
	
	return 0;
}