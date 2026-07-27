#include<stdio.h>

int main()
{
	char str[100], newStr[100];
	int i,j = 0;
	
	printf("Enter a String : ");
	fgets(str, sizeof(str), stdin);
	
	for(i = 0; str[i] != '\0'; i++)
	{
		if(i%2 == 0)      // Keep only even index characters
		{
			newStr[j] = str[i];
			j++;
		}
	}
	newStr[j] = '0';
	
	printf("New String : %s", newStr);
	
	return 0;
}