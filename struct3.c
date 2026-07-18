#include <stdio.h>
#include <string.h>

struct student
{
   int roll;
   char name[20];
   float marks;
};
  void store(struct student *s)
 {
    printf ("Enter a roll: ");
    scanf("%d", &s->roll);

    printf ("Enter a name: ");
    scanf("%s", &s->name);

    printf ("Enter a marks: ");
    scanf("%f", &s->marks);
}
  void display (struct student s)
{
printf("\nRoll no :%d", s.roll);
printf ("\nname   :%s", s.name);
printf("\nmarks   :%.2f\n", s.marks);

}
int main ()
{
struct student s1,s2,s3,temp;

printf("Enter Details of student 1\n");
store(&s1);
printf("Enter Details of student 2\n");
store(&s2);
printf("Enter Details of student 3\n");
store(&s3);

printf ("\n student Details:\n");
display(s1);
display(s2);
display(s3);

temp=s1;
s1=s2;
s2=temp;

printf("\n After after swapping student 1 and student 2:\n");
display(s1);
display(s2);
display(s3);

return 0;

}