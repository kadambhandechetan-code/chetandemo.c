//WAP to Remove the nth Index Character from a Non-Empty String

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int n,i, len;
	
	printf("Enter String : ");
	scanf("%s", str);
	
	printf("Enter Index : ");
	scanf("%d", &n);
	
	len = strlen(str);
	
	if(n >= 0 && n < len)
	{
		for(i = n; i < len; i++)
		{
			str[i] = str[i + 1];
		}
		
		printf("String Afte Removing Character : %s" , str);
	}
	else
	{
		printf("Invalid Index");
	}
	
	return 0;
}