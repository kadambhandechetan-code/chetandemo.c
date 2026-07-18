#include<stdio.h>
#include<string.h>

struct student
{
	int roll;
	char name[20];
	float marks;
	char div;
};
int main()
{
	struct student s1;
	
	s1.roll=101;
	strcpy(s1.name,"chetan");
	s1.marks=89.50;
	s1.div='A';
	
    printf("Roll = %d\n", s1.roll);
    printf("Name = %s\n", s1.name);
	printf("Marks = %.2f\n", s1.marks);
	printf("Division = %c\n", s1.div);
	
	return 0;
}