//WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions
#include<stdio.h>

int main()
{
	char str1[100], str2[100];
	int i = 0, len1 = 0, len2 = 0;
	
	printf("Enter First String : ");
	fgets(str1, sizeof(str1), stdin);
	
	printf("Enter Second String : ");
	fgets(str2, sizeof(str2), stdin);
	
	while(str1[i] != '\0' && str1[i] != '\n')
	{
		len1++;
		i++;
	}
	
	i = 0;
	
	while(str2[i] != '\o' && str2[i] != '\n')
	{
		len2++;
		i++;
	}
	
	if(len1 > len2)
	{
		printf("Larger String : %s" , str1);
	}
	else if(len2 > len1)
	{
		printf("Larger Strinf : %s" , str2);
	}
	else
	{
		printf("Both Strings are Equal in length");
	}
	
	      return 0;
}