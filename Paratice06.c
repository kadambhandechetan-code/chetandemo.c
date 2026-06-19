//Assignement 01
// write a program to check whether a given character is uppercase or lowercase

#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enetr a ch");
	scanf("%c", &ch);
	
	if (ch>='A' && ch<='Z')
	{
		printf("uparcase");
	}
else if(ch>='a' && ch<='z')
	{
		printf("lower case");
		
	}
 else
	{
		printf("not an Alphabet");
	}
	  
	
	
		
	  return 0;
}