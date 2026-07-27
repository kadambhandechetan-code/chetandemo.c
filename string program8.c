//WAP to Calculate the Number of Words Present in a String

#include<stdio.h>

int main()
{
	char str[100];
	int i = 0, words = 0;
	
	printf("Enter a String : ");
	fgets(str, sizeof(str), stdin);
	
	while(str[i] != '\0' && str[i] != '\n')
	{
		if((str[i] != ' ' && str[i + 1] == ' ') || 
	      (str[i] != ' ' && (str[i + 1] == '\n' || str[i + 1] == '\0')))
	      {
	      	words++;
		  }
		  
		  i++;
	}
	printf("Number of Words : %d", words);
	
	return 0;
}