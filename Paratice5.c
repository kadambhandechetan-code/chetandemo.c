// Assigenment 01 
// write a program check whether a given character is a vowel or consonant

#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter a character");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
		printf("%c is vowel",ch);
		
		
	}
	else
	{
		printf("%c is a consonat",ch);
	}
	   
	return 0;
}