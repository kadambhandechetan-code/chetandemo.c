//Write a program to check the string is palindrome or not.

#include<stdio.h>

int main()
{
	char str[100];
	int i = 0, len = 0;
	int start, end;
	int flag = 1;
	
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	
	while(str[len] != '\0' && str[len] != '\n')
	{
		len++;
	}
	
	start = 0;
	end = len - 1;
	
	while(start < end)
	{
		if(str[start] != str[end])
		{
			flag = 0;
			break;
		}
		
		start++;
		end--;
	}
	
	if(flag == 1)
	{
		printf("String is Palindrome");
	}
	else
	{
		printf("String is Not Palindrome");
	}
	
	   return 0;
}