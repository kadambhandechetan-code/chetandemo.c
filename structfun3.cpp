#include <stdio.h>
#include <string.h>

typedef struct Student
{
	int rollNo;
	char name[20];
	int marks;
}Student;


void displayStudents(Student* sarr,int size)
{
		printf("Rollno      Name       Marks\n");
			for(int i=0;i<size;i++)
			{
		
				printf("   %d   ",sarr[i].rollNo);
				printf("  %s    ",sarr[i].name);
				printf("  %d    \n",sarr[i].marks);
			}
}


int searchByRollNo(Student* sarr,int size,int rollno)
{
	for(int i=0;i<size;i++)
	{
		if(sarr[i].rollNo==rollno)
			return i;
	}
	return -1;
			
}
void storeHardCoded(Student* sarr,int* currindex)
{
	sarr[0].rollNo=104;
	strcpy(sarr[0].name,"chetan");
	sarr[0].marks=67;
	
	sarr[1].rollNo=105;
	strcpy(sarr[1].name,"mayur");
	sarr[1].marks=78;
	
	sarr[2].rollNo=106;
	strcpy(sarr[2].name,"pradnya");
	sarr[2].marks=89;
	
	sarr[3].rollNo=107;
	strcpy(sarr[3].name,"yashuu");
	sarr[3].marks=67;
	
	sarr[4].rollNo=108;
	strcpy(sarr[4].name,"kundan");
	sarr[4].marks=67;
	
	*currindex=5;
}

void storeStudents(Student* sarr,int size)
{
	printf("Enter student details");
	for(int i=0;i<size;i++)
	{
		printf("Enter detail of student %d",i+1);
		scanf("%d",&sarr[i].rollNo);
		scanf("%s",sarr[i].name);
		scanf("%d",&sarr[i].marks);
	}
}

void addStudent(Student *sarr,int *currindex,Student stud)
{
	sarr[*currindex]=stud;
	(*currindex)++;
}
 int main()
{
	int size=100;
	Student sarr[size];
	
	int currindex;
	
//	printf("Enter how many student you want to add");
//	scanf("%d",&currindex);
//  storeStudents(sarr,currindex);
	
	 storeHardCoded(sarr,&currindex);
	
	///////////////////////////////////////////////
	int exit;
	do
	{
	
		printf("Enter 1 to display\n");
		printf("Enter 2 to search\n");
		printf("Enter 3 to add student\n");
		int choice;
		scanf("%d",&choice);
		
		switch(choice)
		{
			
			case 1:
		
					printf("Student details are:\n");
					displayStudents(sarr,currindex);
				break;
					
			case 2:
					{
							int rollno;
						
						printf("Enter rollno you want to search");
						scanf("%d",&rollno);
			
						int index=searchByRollNo(sarr,currindex,rollno);
						
						
						if(index!=-1)
							printf("%s found at %d index",sarr[index].name,index);
						else
							printf("not found");
					}
					
				
				break;
				
			case 3:
			  {
				  
				
				Student stud;
				printf("Enter details");
				scanf("%d%s%d",&stud.rollNo,stud.name,&stud.marks);
				addStudent(sarr,&currindex,stud);
			
				break;
		}
			default:printf("Invalid choice");
			
			
		}
		printf("\nDo you want to continue 1/0......");
		scanf("%d",&exit);
	}while(exit==1);
}//main 

