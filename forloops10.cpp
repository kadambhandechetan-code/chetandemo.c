//Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)


#include<stdio.h>
int main()
{
	int n;
	int temp=0;
	int first;
	int last;
	int sum=0;
	
	
	printf("Enter a number");
	scanf("%d", &n);
	
	temp = n;
	
    while(temp >=10)
    {
    	temp = temp / 10;
	}
	sum = first + temp;  
	
    sum = first + last;

    printf("First Digit = %d\n", first);
    printf("Last Digit = %d\n", last);
    printf("Sum = %d", sum);


	    return 0;
}